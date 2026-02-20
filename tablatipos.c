#include <stdio.h>
#include <stdbool.h>
#include "tablatipos.h"

void swap(struct efectividad* e1, struct efectividad* e2);

int main(){

    struct pokemon p;
    struct efectividad tablaEfectividades[NUMTIPOS];
    char tipo[10]; //Buffer para imprimir los tipos

    printf("Este programa esta pensado para juegos de pokemon hasta la quinta generacion.\n\n");
inicio:
    printf("Selecciona los dos tipos de tu pokemon de la siguiente tabla, dejando un espacio entre medias:\n");
    printf("Tipo nulo significa que el pokemon tiene un solo tipo, siendo el otro \"nulo\".\n\n");
    printf("0. Normal\t1. Fuego\t2. Agua\t\t3. Electrico\t4. Planta\t5. Hielo\n");
    printf("6. Lucha\t7. Veneno\t8. Tierra\t9. Volador\t10. Psiquico\t11. Bicho\n");
    printf("12. Roca\t13. Fantasma\t14. Dragon\t15. Siniestro\t16. Acero\t17. Nulo\n\n");
    scanf(" %d %d", &(p.tipo1), &(p.tipo2));

    if (p.tipo1 == p.tipo2){
        printf("Los dos tipos del pokemon no pueden ser iguales.\n\n");
        goto inicio;
    }

    //Bucle de llenado de tabla
    enum tipo j = normal;
    for (int i = 0; j < nulo && i < NUMTIPOS; i++, j++){
        tablaEfectividades[i].efectividad = encuentraEfectividad(p.tipo1, j)*encuentraEfectividad(p.tipo2, j);
        tablaEfectividades[i].tipo = (int) j;    
    }
    //Ordenamos tabla
    bubbleSort(tablaEfectividades, sizeof(tablaEfectividades)/sizeof(tablaEfectividades[0]));

    printf("\nEfectividad de los diferentes tipos frente a tu pokemon:\n\n");

    for (int i = 0; i < NUMTIPOS; i++){
        tipoAString(tablaEfectividades[i], tipo);
        printf("%s: x%.2f\n", tipo, tablaEfectividades[i].efectividad);
    }

    fputc('\n', stdout);

    return 0;
}
