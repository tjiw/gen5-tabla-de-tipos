#ifndef TABLATIPOS_H
#define TABLATIPOS_H

#define NUMTIPOS 17

enum tipo{normal, fuego, agua, electrico, planta, hielo, lucha, veneno, tierra, volador, psiquico, bicho, roca, fantasma, dragon, siniestro, acero, nulo};

struct efectividad{
    enum tipo tipo;
    float efectividad;
};

struct pokemon{
    int tipo1;
    int tipo2;
};

void bubbleSort(struct efectividad arr[], int n);

void tipoAString(struct efectividad s, char tipo[]);

float encuentraEfectividad(enum tipo defensor, enum tipo atacante);

#endif