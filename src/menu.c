/*
 * menu.c
 *
 *  Created on: 13 abr. 2022
 *      Author: Matias
 */

#include <stdio.h>
#include <stdlib.h>

int menu()
{
    int opcion;
    int cant;

    system("cls");
    printf("*** Menu de Opciones *** \n\n");
    printf("1- Ingresar los Kilometros\n");
    printf("2- Ingresar Precio de Vuelos\n");
    printf("3- Calcular todos los costos\n");
    printf("4- Informar Resultados\n");
    printf("5- Carga forzada de datos\n");
    printf("6- Salir\n");

    printf("Ingrese opcion: ");
    cant = scanf("%d", &opcion);
    if(cant == 0)
    {
        opcion = 7;
    }
    return opcion;
}

float kmsIngreasados(){

	float kms;

	printf("Ingrese los kilometros del vuelo: \n");
	scanf("%f", &kms);

	while(kms < 0 ){

		printf("Error. Ingrese nuevamente los kilometros: \n");
		scanf("%f", &kms);
	}

	return kms;
}

float precioAA(){

	float precioAA;

	printf("Ingrese el precio del vuelo en Aerolineas Argentinas: ");
	scanf("%f", &precioAA);

	while(precioAA < 0 ){

		printf("Error. Ingrese nuevamente el precio: ");
		scanf("%f", &precioAA);
	}

	return precioAA;
}

float precioLatam(){

	float precioLatam;

	printf("Ingrese el precio del vuelo en Latam: ");
	scanf("%f", &precioLatam);

	while(precioLatam < 0 ){

		printf("Error. Ingrese nuevamente el precio: ");
		scanf("%f", &precioLatam);
	}

	return precioLatam;
}


float debito(float precio){

	float debito;

	debito = precio - ((precio*10)/100);

	return debito;
}

float credito(float precio){

	float credito;

	credito = precio + ((precio*25)/100);

	return credito;
}

float bitcoin(float precio){

	float bitcoin;

	bitcoin = precio/4594150.58;

	return bitcoin;
}

float unitario(float precio, float kms){

	float unitario;

	unitario = precio/kms;

	return unitario;
}


float diferenciaDePreciosIngresados(float precioAA, float precioLatam){

	float diferenciaDePrecios;

	if(precioAA > precioLatam){

		diferenciaDePrecios = precioAA - precioLatam;
	}
	else{

		diferenciaDePrecios = precioLatam - precioAA;
	}

	return diferenciaDePrecios;
}



void resultadosIngresados(float precioAA, float precioLatam, float kms){

	printf("KMs Ingresados: %.2f km \n\n", kms);
	printf("Precio Aerolineas Argentinas: $%.2f \n", precioAA);
	float debitoAA = debito(precioAA);
	printf("a) Precio con tarjeta de debito: $%.2f \n", debitoAA);
	float creditoAA = credito(precioAA);
	printf("b) Precio con tarjeta de credito: $%.2f \n", creditoAA);
	float bitcoinAA = bitcoin(precioAA);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", bitcoinAA);
	float unitarioAA = unitario(precioAA, kms);
	printf("d) Mostrar precio Unitario: $%.2f \n\n", unitarioAA);
	printf("Precio Latam: $%.2f \n", precioLatam);
	float debitoLatam = debito(precioLatam);
	printf("a) Precio con tarjeta de debito: $%.2f \n", debitoLatam);
	float creditoLatam = credito(precioLatam);
	printf("b) Precio con tarjeta de credito: $%.2f \n", creditoLatam);
	float bitcoinLatam = bitcoin(precioLatam);
	printf("c) Precio pagando con bitcoins: %.5f BTC \n", bitcoinLatam);
	float unitarioLatam = unitario(precioLatam, kms);
	printf("d) Mostrar precio Unitario: $%.2f \n\n", unitarioLatam);
	float diferencia = diferenciaDePreciosIngresados(precioAA, precioLatam);
	printf("La diferencia de precio es: $%.2f \n", diferencia);
}

void cargaForzada(){
	resultadosIngresados(162965,159339,7090);
}



void informarNoEsNumero()
{
    printf("Eso no es un numero.\n");
}
