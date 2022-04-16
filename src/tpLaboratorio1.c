/*
 ============================================================================
 Name        : tpLaboratorio1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "menu.h"


int main(void) {

	setbuf(stdout, NULL);

	char salir;
	float kms = 0;
	int flagKms = 0;
	float precioA = 0;
	float precioL = 0;
	int flagPrecio = 0;


	do{

		switch(menu()){

		case 1:

			kms = kmsIngreasados();
			flagKms = 1;
			system("pause");
			break;

		case 2:

			precioL = precioLatam();
			precioA = precioAA();

			flagPrecio = 1;
			system("pause");
			break;

		case 3:

			if(flagKms == 1 && flagPrecio == 1){

				debito(precioA);
				credito(precioA);
				bitcoin(precioA);
				unitario(precioA, kms);
				debito(precioL);
				credito(precioL);
				bitcoin(precioL);
				unitario(precioL, kms);
				diferenciaDePreciosIngresados(precioA, precioL);

			}
			else if(flagKms == 0 && flagPrecio == 1){

				printf("Error. Para poder continuar con los calculos antes debe ingresar los kilometros del vuelo.\n");

			}
			else if(flagKms == 1 && flagPrecio == 0){

				printf("Error. Para poder continuar con los calculos antes debe ingresar los precios del vuelo.\n");

			}
			else{

				printf("Error. Para poder continuar con los calculos antes debe ingresar los kilometros y los precios del vuelo.\n");

			}
			printf("se calcularon los costos con exito!\n");
			system("pause");
			break;

		case 4:

			if(flagKms == 1 && flagPrecio == 1){

			resultadosIngresados(precioA, precioL, kms);

			}
			else if(flagKms == 0 && flagPrecio == 1){

				printf("Error. Para poder continuar con los calculos antes debe ingresar los kilometros del vuelo.\n");

			}
			else if(flagKms == 1 && flagPrecio == 0){

				printf("Error. Para poder mostrar los resultados antes debe ingresar los precios del vuelo.\n");

			}
			else{

				printf("Error. Para poder mostrar los resultados antes debe ingresar los kilometros y los precios del vuelo.\n");

				}
			system("pause");
			break;

		case 5:
			cargaForzada();
			system("pause");
			break;

		case 6:

			 salir = 's';
			 system("pause");
			break;

		case 7:

			informarNoEsNumero();
			system("pause");
			break;

		default:
			printf("Opcion invalida\n");
			system("pause");
			}

		}while(salir != 's');

	return EXIT_SUCCESS;

}





