/*
 ============================================================================
 Name        : Laboratorio.c
 Author      : Analia Cazal
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Laboratorio3.h"
void funcion();
int main(void) {
	int array_valoresinicio[5]; //declaracion del array donde el usuario va a insertar los valores
	int array_especial[5]; //declaracion del array para numeros consecuentes primos
	int array_noespecial[5]; //declaracion del array para numeros consecuentes primos
	int i, c; //declaracion de variables a utilizar
	printf("Inserte los valores dentro del vector:");
	i=0;
	for(i=0;i<5;i++){  //el usuario llena el vector inicio
		scanf("%d", &array_valoresinicio[5]);
	}
	while((c=getchar()) != '\n' && c != EOF); //limpieza de buffer

	funcion(); //llamada a la funcion a utilizar en el bloque
		return EXIT_SUCCESS;
}

void funcion(){
	/*
	 * en este punto ya no sabría cómo implementar la función
	 */
}








