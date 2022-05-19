/* 
Autor: Franciscomilan
Escuela: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion estructurada
Ciclo: 01/2022
Realizado: 03/02/2022
Descripcion: Programa 2 en C de la tarea 1 que pide datos de un triangulo y calcula el area para la materia programacion estructurada.
*/

//Libreria
#include<stdio.h>

//Principal
int main () {
	//Variables
	int base,altura;
	float area;
	//Entrada de datos
	printf("Introduce la base:");
	scanf("%d",&base);
	printf("Introduce la altura:");
	scanf("%d",&altura);
	//Proceso
	area=(float)base*altura/2.0;
	//Salida
	printf("El area del triangulo es: %f",area);
	//Retorno
	return 0;
}