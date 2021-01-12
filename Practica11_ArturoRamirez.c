/*

Práctica 11                                                                               Ramírez Mondragón Arturo Gabriel
10 de enero del 2021

*/

//Código fuente para los ejemplos faltantes de la práctica 11 de Fundamentos de Programación (FI-UNAM)--------------------
//En este codigo fuente no se leen datos, únicamente se imprimen arreglos-------------------------------------------------

//Única librería utilizada------------------------------------------------------------------------------------------------
#include <stdio.h>

//Funciones llamadas durante la funcion principal para cada ejemplo:------------------------------------------------------
void primer_Ejercicio();
void segundo_Ejercicio();
void tercer_Ejercicio();

//Declaración de variables globales:--------------------------------------------------------------------------------------



//Función principal:------------------------------------------------------------------------------------------------------
int main(){
	
//Variable para la estructura switch y escoger un problema----------------------------------------------------------------
	unsigned int sel=0;
	
//Estructura de iteración 'do-while' para iterar todo el código-----------------------------------------------------------
	do{
	
//Menú para escoger el ejemplo:-------------------------------------------------------------------------------------------
		printf("\n Practica11\t\t\t\t\t\t\t\tRamirez Mondragon Arturo Gabriel\n 10 de enero del 2021.\n\n\n");
	
		printf("\t\t\t\t--------------Menu---------------\n\n\n\n");
	
		printf("\tPor favor, seleccione el problema que guste resolver:\n\n\n");
	
		printf(" 1) Primer ejemplo (apuntadores).\n\n");
		printf(" 2) Segundo ejemplo (apuntadores ciclo for).\n\n");
		printf(" 3) Tercer ejemplo (arreglo multidimensional con apuntadores).\n\n");
		printf(" 4) Salir.\n\n");
	
	
		printf("\n\n\tSeleccion: ");
		scanf("%u", &sel);
	
//Selección de instrucciones para cada problema:--------------------------------------------------------------------------
		switch (sel) {
		
		
			default:
				printf("\n\n\t\tNo tengo tantos ejemplos. Lo siento :(\n");
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 1:
				printf("\n\n\n\n\t\t\tCodigo (apuntadores).\n\n");
				primer_Ejercicio();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
		
			case 2:
				printf("\n\n\n\n\t\t\tCodigo (apuntadores ciclo for).\n\n");
				segundo_Ejercicio();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
		
				
			case 3:
				printf("\n\n\n\n\t\t\tCodigo (arreglos multidimensionales con apuntadores).\n\n");
				tercer_Ejercicio();
				printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
				printf("\n\n");
			break;
	
	
		setbuf(stdin, NULL); // limpia el buffer del teclado y evitar errores de iteración--------------------------------
		
		}
	
	//Final de la estructura de iteración 'do-while' para repetir el código las veces que se desee------------------------
	} while (sel != 4);
	
	return 0;
}


//Funciones secundarias en orden y su propia declaración de variables (locales):------------------------------------------

void primer_Ejercicio() {

//Este programa trabaja con aritmética de apuntadores para acceder a los valores de un arreglo.---------------------------


//Declaración de variables
	//Variable para el arreglo
	int arr[] = {5, 4, 3, 2, 1};
	//Declaración del apuntador
	int *apArr;

//Asignación de la dirección de memoria del apuntador
	apArr = arr;

//Bloque deinstrucciones
	printf("int arr[] = {5, 4, 3, 2, 1};\n");
	printf("apArr = &arr[0]\n");
	//Declaración de la variable que tendrá el valor de la memoria del apuntador
	int x = *apArr;
	//Instrucciones para mostrar la asignación de valores de la instrucción anterior
	printf("x = *apArr \t -> x = %d\n", x);
	x = *(apArr+1);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	x = *(apArr+2);
	printf("x = *(apArr+1) \t -> x = %d\n", x);
	
	
	return;

}

void segundo_Ejercicio(){
	
/*   Este programa genera un arreglo unidimensional de 5 elementos y------------------------------------------------------
	 accede a cada elemento del arreglo a través de un apuntador utilizando un ciclo 'for'.   */


//Declaraciónde variables
	//Declaración de un valor a una palabra clave
	#define TAMANO 5
	//Declaración del arreglo
	int lista[TAMANO] = {10, 8, 5, 8, 7};
	//Declaración del índice para evitar errores de compilación propio de la IDE
	int indice;
	//Declaración del apuntador y la asignación de su dirección de memoria
	int *ap = lista;
	
//Bloque de instrucciones
	printf("\tLista\n");
	//Estructira de repetición para mostrar cada elemento del arreglo con el apuntador
	for (indice = 0 ; indice < 5 ; indice++){
		printf("\nCalificación del alumno %d es %d", indice+1, *(ap+indice));
	}
	printf("\n");


	return;
	
}

void tercer_Ejercicio(){

/*  Este programa genera un arreglo de dos dimensiones (arreglo multidimensional) y accede a sus elementos----------------
	a través de un apuntador utilizando un ciclo 'for'.  */
	

//Declaración de variables

	//Variable del arreglo multidimensional		
	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	//Variables para estructuras de iteración y apuntador
	int i, cont=0, *ap;
	
//Asignación de la dirección de memoria para el apuntador
	ap = matriz[0];

//Bloque de intrucciones
	printf("Imprimir Matriz\n");
	//Estructura de repetición para los renglones de la matriz
	for (i=0 ; i<9 ; i++){
		/*Estructura para saltar al siguiente renglón
		  una vez impreso los tres valores*/
		if (cont == 3){
			printf("\n");
			cont = 0;
		}
	//Estructura para imprimir uno a uno los valores del arreglo
		printf("%d\t",*(ap+i));
		cont++;
	}
	printf("\n");
	
	return;
	
}

