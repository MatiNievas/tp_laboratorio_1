/*
 * menu.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Matias
 */

#ifndef MENU_H_
#define MENU_H_


#endif /* MENU_H_ */

/// @brief
/// imprime el menu y muestra las opciones que puede seleccionar el usuario
///
/// @return retorna la opcion elegida
int menu();

/// @brief
/// aca el usuario coloca la cantidad de kilometros que desea, pero si ese numero es menor a 0, el usuario debera colocar nuevamente el valor
///
/// @return retorna los kms ingresados
float kmsIngreasados();

/// @brief
/// aca el usuario coloca el precio de Aeorolineas Argentinas que desea, pero si ese numero es menor a 0, el usuario debera colocar nuevamente el valor
///
/// @return retorna el precio ingresado de Aerolineas Argentinas
float precioAA();

/// @brief
/// aca el usuario coloca el precio de Latam que desea, pero si ese numero es menor a 0, el usuario debera colocar nuevamente el valor
///
/// @return retorna el precio ingresado de Latam

float precioLatam();

/// @brief
/// aca se calcula el descuento del 10% con tarjeta de debito
///
/// @param precio
///
/// @return debito

float debito(float precio);

/// @brief
/// aca se calcula un interes del 25% con tarjeta de cedito
///
/// @param precio
///
/// @return credito

float credito(float precio);

/// @brief
/// aca se hace la conversion de bitcoin a pesos
///
/// @param precio
///
/// @return bitcoin

float bitcoin(float precio);

/// @brief
/// aca se hace el precio unitario por kms
/// @param precio
/// @param kms
/// tomo las dos variables y las divido entre si
///
/// @return retorna el precio unitarion

float unitario(float precio, float kms);

/// @brief
/// aca se hace la diferencia de precio que hay entre Aerolineas Argentinas y Latam
/// @param precioAA
/// @param precioLatam
/// se toma el valor de ambas variables y se restan
/// @return retorna la diferencia entre ellos

float diferenciaDePreciosIngresados(float precioAA, float precioLatam);

/// @brief
/// aca se imprime los resultados de todos los calculos
/// @param precioAA
/// @param precioLatam
/// @param kms

void resultadosIngresados(float precioAA, float precioLatam, float kms);

/// @brief
/// aca se colocan los valores predefinidos, se calculan con las funciones anteriores y se imprime el resultado

void cargaForzada();

/// @brief
/// aca a la hora de seleccionar una opcion en el menu, y en vez de seleccionar un numero seleccionas un caracter, va a mostrar el mensaje

void informarNoEsNumero();
