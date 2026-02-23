english: typechart
	./typechart

typechart: tablatipos.c funciones.c tablatipos.h
	gcc -Wall -Wextra -g -DINGLES -o typechart typechart.c func.c

spanish: tablatipos
	./tablatipos

tablatipos: typechart.c func.c typechart.h
	gcc -Wall -Wextra -g -o tablatipos typechart.c func.c

