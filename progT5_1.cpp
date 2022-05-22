/* 
Autor: Franciscomilan
Fecha: 04/04/22
Escuela: Universidad uvm
Materia: Programacion estructurada
Profesor: Armando Cruz
Ciclo: 01/2022
Descripcion: Programa que conforma la tarea 5 en C, que hace uso de la libreria string y utiliza 
funciones externas a main y con strlen, strcpy, strcmp,  el programa muestra un menu donde se 
indica que funcion se quiere probar para la materia programacion estructurada
*/

//Librerias
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//Encabezados de funciones
void FuncionStrlen();
void FuncionStrcpy();
void FuncionStrcmp();
//Principal
int main() {
	//Declarar variables
	int opcionSelect;
	//Menu
	printf("\n - Menu de opciones - \n ");
	printf("\t 0 - Salir \n");
	printf("\t 1 - Strlen \n");
	printf("\t 2 - Strcpy \n");
	printf("\t 3 - Strcmp\n");
	printf(" -- Ingresa la opcion que deseas probar de String: ");
	scanf("%d", &opcionSelect);
	switch (opcionSelect) {
		case 0: printf(" \n-- Adios --\n ");
			break;
		case 1: printf("\n\n - Seleccionaste Strlen - \n ");
       			FuncionStrlen();
			break;
		case 2: printf("\n - Seleccionaste Strcpy - \n");
			FuncionStrcpy();
			break;
		case 3: printf("\n - Seleccionaste Strcmp - \n");
			FuncionStrcmp();
		} 
	//Retorno
	return 0;
}

//Funcion 1 - Strlen
void FuncionStrlen() {
    	printf("\tLa funcion utiliza una cadena de texto y calcula su longitud ");
  	//Variables
	char cadena[] = "UniversidadUVM\n";
	float longitud = 0;
	longitud = strlen(cadena);
  	//Proceso
        printf("\n\n Por ejemplo si ponemos: UniversidadUVM\n");
	//Salida
	printf("\n La longitud de la cadena: %s \t Es de: %.0f  caracteres", cadena, longitud);
}  

//Funcion 2 - Strcpy
void FuncionStrcpy() {
	printf("Esta funcion copia la cadena el contenido de una cadena a otra");
	printf("\nPor ejemplo copia la cadena A a la cadena B\n ");
  	//Variables
	char cadenaA [30];
	char cadenaB [30];
  	//Entrada de datos
	printf("\n Ingresa la cadena A: \t");
	//Proceso
	scanf("%s",cadenaA);    
	strcpy(cadenaB,cadenaA);
  	//Salida
	printf("\nIngresaste en la cadena A: \t%s \n",cadenaA);
	printf("\n La cadena B es: \t\t%s",cadenaB);			
} 

//Funcion 3 - Strcmp
void FuncionStrcmp() {
	printf("\nEsta funcion compara alfabeticamente una cadena con otra.  \n");
	printf(" Se compara caracter por caracter de manera ordenada alfabeticamente. \n");
	printf(" Los primeros caracteres que encuentre distintos son los que determinan si es mayor o menor.\n");
	printf("-Es menor mientras mas cerca de A este-\n");
	printf("-Es mayor mientras mas cerca de Z este-\n");
	//Declarar variables
	char cadenaA[20];
	char cadenaB[20];
	//Entrada de datos
	printf("\nIntroduce la cadena Uno: \t");
	scanf("%s",cadenaA);
	printf("\nIntroduce la cadena Dos: \t ");
	scanf("%s",cadenaB);
	//Proceso
	int resultado = strcmp(cadenaA,cadenaB);
	if (resultado == 0) {
		//Salida
		printf("\n Las cadenas son iguales \n");
	}  else if (resultado >0) {
		//Salida
		printf("\n La cadena A es mayor que la cadena B\n");
	}  else {
		//Salida
		printf("\n La cadena A es mayor que la cadena B\n");
	}
}


