/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Ciclo: 01/2022
Realizado: 03/02/2022
Descripcion: Programa 3 de la tarea 1 que recibe °c convierte a °f para la materia de programacion estructurada. 
*/

//Libreria
#include<stdio.h>

//Principal
int main() {
	//Declaracion de variables
	float gradoF, gradoC;
	//Entrada de datos
	printf("Temperatura en centigrados: ");
	scanf("%f",&gradoC);	
	//Proceso
	gradoF=(9/5.0*gradoC)+32;
	//Salida
	printf("La temperatura en Fahrenheit es %f",gradoF);
	//Salida
	return 0;
}