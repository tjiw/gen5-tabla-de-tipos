#ifndef TABLATIPOS_H
#define TABLATIPOS_H

#define NUMTIPOS 17

#ifdef INGLES

#define NORMAL "Normal"
#define FUEGO "Fire"
#define AGUA "Water"
#define ELECTRICO "Electric"
#define PLANTA "Grass"
#define HIELO "Ice"
#define LUCHA "Fighting"
#define VENENO "Poison"
#define TIERRA "Ground"
#define VOLADOR "Flying"
#define PSIQUICO "Psychic"
#define BICHO "Bug"
#define ROCA "Rock"
#define FANTASMA "Ghost"
#define DRAGON "Dragon"
#define SINIESTRO "Dark"
#define ACERO "Steel"

#define MENSINICIAL "This program is meant for Pokemon games up to the fifth generation.\n"
#define TABLA "\nSelect both types of your Pokemon, leaving a space between numbers.\n" \
"Null type means your Pokemon has only one type, being the other \"null\".\n\n" \
"0.  Normal\t1.  Fire\t2.  Water\t3.  Electric\t4.  Grass\t5.  Ice\n" \
"6.  Fighting\t7.  Poison\t8.  Ground\t9.  Flying\t10. Psychic\t11. Bug\n" \
"12. Rock\t13. Ghost\t14. Dragon\t15. Dark\t16. Steel\t17. Null\n\n" \

#define ERROR1 "Both Pokemon types (including Null) must be different.\n\n"
#define ERROR2 "\nError on the first type.\n"
#define ERROR3 "\nError on the second type\n"
#define ERROR4 "\nError. Possible values: 1, 2\n"

#define MENSFINAL "\nPower of every type against your Pokemon:\n\n"
#define FOOTER "\nPress 1 to introduce another Pokemon or 2 to exit.\n"

#else

#define NORMAL "Normal"
#define FUEGO "Fuego"
#define AGUA "Agua"
#define ELECTRICO "Electrico"
#define PLANTA "Planta"
#define HIELO "Hielo"
#define LUCHA "Lucha"
#define VENENO "Veneno"
#define TIERRA "Tierra"
#define VOLADOR "Volador"
#define PSIQUICO "Psiquico"
#define BICHO "Bicho"
#define ROCA "Roca"
#define FANTASMA "Fantasma"
#define DRAGON "Dragon"
#define SINIESTRO "Siniestro"
#define ACERO "Acero"

#define MENSINICIAL "Este programa esta pensado para juegos de pokemon hasta la quinta generacion.\n"
#define TABLA "\nSelecciona los dos tipos de tu pokemon de la siguiente tabla, dejando un espacio entre medias:\n" \
"Tipo nulo significa que el pokemon tiene un solo tipo, siendo el otro \"nulo\".\n\n" \
"0.  Normal\t1.  Fuego\t2.  Agua\t3.  Electrico\t4.  Planta\t5.  Hielo\n" \
"6.  Lucha\t7.  Veneno\t8.  Tierra\t9.  Volador\t10. Psiquico\t11. Bicho\n" \
"12. Roca\t13. Fantasma\t14. Dragon\t15. Siniestro\t16. Acero\t17. Nulo\n\n" \

#define ERROR1 "Los dos tipos del pokemon no pueden ser iguales.\n\n"
#define ERROR2 "\nTipo 1 incorrecto.\n"
#define ERROR3 "\nTipo 2 incorrecto.\n"
#define ERROR4 "\nError. Valores admitidos: 1, 2\n"

#define MENSFINAL "\nEfectividad de los diferentes tipos frente a tu pokemon:\n\n"
#define FOOTER "\nPulsa 1 para introducir otro pokemon, o 2 para salir.\n"

#endif

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