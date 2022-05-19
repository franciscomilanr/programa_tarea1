/* 
Autor: Franciscomilan
Escuala: Universidad uvm
Profesor: Armando Cruz
Materia: Programacion Estructurada
Ciclo: 01/2022
Realizado: 8/02/2022
Descripcion: Programa en C que es la tarea 1 el cual calcula el area del rombo para la materia programacion estructurada.
*/

//Librerias
#include<stdio.h>
#include<math.h>

//Principal
int main() {
	//Variables
	int D,d,area;	
	//Ingresar datos
	printf("Introduce el valor D: "); 
	scanf("%d",&D);
	printf("Introduce el valor de d: ");
	scanf("%d",&d);
	//Proceso
	area=(D*d)/2;
	//Salida
	printf("El area del rombo es: %d",area);
	//Retorno
	return 0;
}