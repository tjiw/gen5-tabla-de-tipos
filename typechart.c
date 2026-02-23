#include <stdio.h>
#include "typechart.h"

void swap(struct efectividad* e1, struct efectividad* e2);

int main(){

    _Bool error = 0;
    struct pokemon p;
    struct efectividad tablaEfectividades[NUMTIPOS];
    char tipo[10]; //Buffer para imprimir los tipos

    printf(MENSINICIAL);

    while(1){

        printf(TABLA);
        scanf(" %d %d", &(p.tipo1), &(p.tipo2));
    
        if (p.tipo1 == p.tipo2){
            printf(ERROR1);
            error = 1;
        }

        if (p.tipo1 < normal || p.tipo1 > nulo){
            printf(ERROR2);
            error = 1;
        }

        if (p.tipo2 < normal || p.tipo2 > nulo){
            printf(ERROR3);
            error = 1;
        }

        if (error == 1){
            error = 0;
            continue;
        }

        //Bucle de llenado de tabla
        enum tipo j = normal;
        for (int i = 0; j < nulo && i < NUMTIPOS; i++, j++){
            tablaEfectividades[i].efectividad = encuentraEfectividad(p.tipo1, j)*encuentraEfectividad(p.tipo2, j);
            tablaEfectividades[i].tipo = (int) j;    
        }
        //Ordenamos tabla
        bubbleSort(tablaEfectividades, sizeof(tablaEfectividades)/sizeof(tablaEfectividades[0]));

        printf(MENSFINAL);

        for (int i = 0; i < NUMTIPOS; i++){
            tipoAString(tablaEfectividades[i], tipo);
            if (tablaEfectividades[i].efectividad != 1.0)
                printf("%s: x%.2f\n", tipo, tablaEfectividades[i].efectividad);
        }

        end:
        int i;
        printf(FOOTER);
        scanf(" %d", &i);
        if (i == 1)
            continue;
        else if(i == 2)
            return 0;
        else {
            printf(ERROR4);
            goto end;
        }

    }
}
