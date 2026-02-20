#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "tablatipos.h"

void swap(struct efectividad* e1, struct efectividad* e2){

    struct efectividad aux = *e1;
    *e1 = *e2;
    *e2 = aux;
}

void tipoAString(struct efectividad s, char tipo[]){

    switch(s.tipo){
        case normal:
        strcpy(tipo, "Normal");
        break;
        case fuego:
        strcpy(tipo, "Fuego");
        break;
        case agua:
        strcpy(tipo, "Agua");
        break;
        case electrico:
        strcpy(tipo, "Electrico");
        break;
        case planta:
        strcpy(tipo, "Planta");
        break;
        case hielo:
        strcpy(tipo, "Hielo");
        break;
        case lucha:
        strcpy(tipo, "Lucha");
        break;
        case veneno:
        strcpy(tipo, "Veneno");
        break;
        case tierra:
        strcpy(tipo, "Tierra");
        break;
        case volador:
        strcpy(tipo, "Volador");
        break;
        case psiquico:
        strcpy(tipo, "Psiquico");
        break;
        case bicho:
        strcpy(tipo, "Bicho");
        break;
        case roca:
        strcpy(tipo, "Roca");
        break;
        case fantasma:
        strcpy(tipo, "Fantasma");
        break;
        case dragon:
        strcpy(tipo, "Dragon");
        break;
        case siniestro:
        strcpy(tipo, "Siniestro");
        break;
        case acero:
        strcpy(tipo, "Acero");
        break;
        default:
        strcpy(tipo, "Error");
    }
}

float encuentraEfectividad(enum tipo defensor, enum tipo a){

    int atacante = (int) a;

    //Efectividad de un ataque tipo atacante contra un pokemon de tipo defensor
    float efectividad = 1.0;

    switch (defensor){

        case nulo:
        break;

        case normal:
        switch (atacante){
            case lucha:
            efectividad = 2.0;
            break;
            case fantasma:
            efectividad = 0.0;
            break;
            case normal:
            efectividad = 1.0;
            break;
        }
        break;

        case fuego:
        switch (atacante){
            case fuego:
            case planta:
            case hielo:
            case acero:
            efectividad = 0.5;
            break;
            case agua:
            case tierra:
            case roca:
            efectividad = 2.0;
            break;
        }
        break;

        case agua:
        switch (atacante){
            case fuego:
            case agua:
            case hielo:
            case acero:
            efectividad = 0.5;
            break;
            case electrico:
            case planta:
            efectividad = 2.0;
            break;
        }
        break;

        case electrico:
        switch (atacante){
            case electrico:
            case volador:
            case acero:
            efectividad = 0.5;
            break;
            case tierra:
            efectividad = 2.0;
            break;        
        }
        break;

        case planta:
        switch (atacante){
            case agua:
            case electrico:
            case planta:
            case tierra:
            efectividad = 0.5;
            break;
            case fuego:
            case hielo:
            case veneno:
            case volador:
            case bicho:
            efectividad = 2.0;
            break;
        }
        break;

        case hielo:
        switch (atacante){
            case hielo:
            efectividad = 0.5;
            break;
            case fuego:
            case lucha:
            case roca:
            case acero:
            efectividad = 2.0;
            break;
        }
        break;

        case lucha:
        switch (atacante){
            case volador:
            case psiquico:
            efectividad = 2.0;
            break;
            case bicho:
            case roca:
            case siniestro:
            efectividad = 0.5;
            break;
        }
        break;

        case veneno:
        switch (atacante){
            case planta:
            case lucha:
            case veneno:
            case bicho:
            efectividad = 0.5;
            break;
            case tierra:
            case psiquico:
            efectividad = 2.0;
            break;
        }
        break;

        case tierra:
        switch (atacante){
            case electrico:
            efectividad = 0.0;
            break;
            case agua:
            case planta:
            case hielo:
            efectividad = 2.0;
            break;
            case veneno:
            case roca:
            efectividad = 0.5;
            break;
        }
        break;

        case volador:
        switch (atacante){
            case tierra:
            efectividad = 0.0;
            break;
            case electrico:
            case hielo:
            case roca:
            efectividad = 2.0;
            break;
            case planta:
            case lucha:
            case bicho:
            efectividad = 0.5;
            break;
        }
        break;

        case psiquico:
        switch (atacante){
            case lucha:
            case psiquico:
            efectividad = 0.5;
            break;
            case bicho:
            case fantasma:
            case siniestro:
            efectividad = 2.0;
            break;
        }
        break;
        
        case bicho:
        switch (atacante){
            case fuego:
            case volador:
            case roca:
            efectividad = 2.0;
            break;
            case planta:
            case lucha:
            case tierra:
            efectividad = 0.5;
            break;
        }
        break;

        case roca:
        switch (atacante){
            case normal:
            case fuego:
            case veneno:
            case volador:
            efectividad = 0.5;
            break;
            case agua:
            case planta:
            case lucha:
            case tierra:
            case acero:
            efectividad = 2.0;
            break;
        }
        break;

        case fantasma:
        switch (atacante){
            case normal:
            case lucha:
            efectividad = 0.0;
            break;
            case veneno:
            case bicho:
            efectividad = 0.5;
            break;
            case fantasma:
            case siniestro:
            efectividad = 2.0;
            break;
        }
        break;

        case dragon:
        switch (atacante){
            case fuego:
            case agua:
            case electrico:
            case planta:
            efectividad = 0.5;
            break;
            case hielo:
            case dragon:
            efectividad = 2.0;
            break;
        }
        break;

        case siniestro:
        switch (atacante){
            case psiquico:
            efectividad = 0.0;
            break;
            case lucha:
            case bicho:
            efectividad = 2.0;
            break;
            case fantasma:
            case siniestro:
            efectividad = 0.5;
            break;
        }
        break;
        
        case acero:
        switch (atacante){
            case agua:
            case electrico:
            efectividad = 1.0;
            break;
            case veneno:
            efectividad = 0.0;
            break;
            case fuego:
            case lucha:
            case tierra:
            efectividad = 2.0;
            break;
            default:
            efectividad = 0.5;
        }
        break;
    }

    return efectividad;

}

void bubbleSort(struct efectividad arr[], int n){
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j].efectividad > arr[j + 1].efectividad) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}