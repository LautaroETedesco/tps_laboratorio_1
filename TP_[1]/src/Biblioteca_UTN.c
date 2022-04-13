/*
 * Biblioteca_UTN.c
 *
 *  Created on: Apr 11, 2022
 *      Author: Lautaro Tedesco
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca_UTN.h"

/// Trae del main el dato para poder mostrar en pantalla los kilometros una vez que son ingresados @param cantidadKilometros
///	Trae del main el dato para poder mostrar en pantalla el precio del vuelo de Aerolineas una vez que es ingresado @param precioAerolineas
/// Trae del main el dato para poder mostrar en pantalla el precio del vuelo de Latam una vez que es ingresado @param precioLatam
/// La funcion retorna un numero entero que se ingresa por consola @return

int menuAerolineas(float cantidadKilometros,float precioAerolineas,float precioLatam)
{
	int opcion;

	printf("\n1. Ingresar Kilómetros: (km=%.2f)"
			"\n2. Ingresar Precio de Vuelos: (Aerolíneas=%.2f, Latam=%.2f)"
			"\n3. Calcular todos los costos:"
			"\n4. Informar Resultados"
			"\n5. Carga forzada de datos"
			"\n6. Salir\n",cantidadKilometros,precioAerolineas,precioLatam);

	opcion = pedirEnteroAlUsuario(1,6,"Ingrese una opcion: ","Error, Ingrese una opcion valida: ");



	return opcion;
}

/// Se ingresa un entero para que sea el valor minimo a ingresar en la funcion @param min
/// Se ingresa un entero para que sea el valor maximo a ingresar en la funcion @param max
/// Se ingresa el mensaje que se va a mostrar al pedir un entero @param mensaje
/// Se ingresa el mensaje de error que se va a mostrar al pedir un entero y se ingrese de forma erronea @param mensajeDeError
/// La funcion retorna un numero entero que se ingresa por consola@return

int pedirEnteroAlUsuario(int min,int max,char mensaje[200],char mensajeDeError[200])
{
	int numero;

	printf(mensaje);
	scanf("%d",&numero);

	if(numero<min || numero>max)
	{
		printf(mensajeDeError);
		scanf("%d",&numero);
	}

	return numero;
}

/// Se ingresa un float para que sea el valor minimo a ingresar en la funcion @param min
/// Se ingresa un float para que sea el valor maximo a ingresar en la funcion @param max
/// Se ingresa el mensaje que se va a mostrar al pedir un entero @param mensaje
/// Se ingresa el mensaje de error que se va a mostrar al pedir un entero y se ingrese de forma erronea @param mensajeDeError
/// La funcion retorna un numero float que se ingresa por consola@return

float pedirFloatAlUsuario(float min,float max,char mensaje[200],char mensajeDeError[200])
{

	float numero;

	printf(mensaje);
	scanf("%f",&numero);

	if(numero<min || numero>max)
	{
		printf(mensajeDeError);
		scanf("%f",&numero);
	}

	return numero;
}

/// Se ingresa el mensaje que se va a mostrar al pedir un entero @param mensaje
/// La funcion retorna un caracter que se ingresa por consola @return

char pedirUnCaracterAlUsuario(char mensaje[200])
{
	char retorno;

	printf(mensaje);
	fflush(stdin);
	scanf("%c",&retorno);

	return retorno;
}

/// Se pasa un numero float @param nro1
/// Se pasa un numero float @param nro2
/// Se devuelve el resultado de la multiplicacion entre nro1 y nro2 @return

float multiplicarFloats(float nro1, float nro2)
{
	float retorno;

	retorno = (nro1*nro2);

	return retorno;
}

/// Se pasa un numero float @param numero
/// Se pasa un numero entero para restar como porcentaje @param porcentajeARestar
/// Retorno el resultado de la resta del porcentaj @return

float restarPorcentaje(float numero, int porcentajeARestar)
{
	float retorno;
	float porcentaje;

	porcentaje=(numero*porcentajeARestar)/100.0;
	retorno=numero-porcentaje;

	return retorno;
}

/// se pasa un numero float @param numero
/// se pasa un numero entero para sumar como porcentaje @param porcentajeASumar
/// Retorno el resultado de la suma del porcentaje @return

float sumarPorcentaje(float numero, int porcentajeASumar)
{
	float retorno;
	float porcentaje;

	porcentaje=(numero*porcentajeASumar)/100.0;
	retorno=numero+porcentaje;

	return retorno;
}

/// se pasa la cantidad de pesos como float @param cantidadPesos
/// devuelve la multiplicacion de la cantidad de pesos por el valor de BTC@return

float calculoBTC(float cantidadPesos)
{
	float retorno;

	retorno=cantidadPesos/4606954.55;

	return retorno;
}

/// Se pasa un numero float @param nro1
/// Se pasa un numero float@param nro2
/// Retorno la divicion entre dos numeros flotantes@return

float dividirFloat(float nro1, float nro2)
{
	float retorno;

	retorno=(nro1/nro2);

	return retorno;
}

/// Se pasa un numero float @param nro1
/// Se pasa un numero float@param nro2
/// Retorno el resultado de la resta entre nro1 y nro2 @return

float restarFloats(float nro1,float nro2)
{
	float retorno;

	retorno=(nro1-nro2);

	return retorno;
}

/// Es el precio total del viaje por latam ingresado por el usuario anteriormente @param precioLatam
/// Es el precio del viaje por latam con 10% de descuento @param latamConDescuento
/// Es el precio del viaje por latam con 25% de interes @param latamConInteres
/// Es el precio del viaje por latam expresado en BTC@param latamEnBTC
/// Es el precio del viaje por latam por kilometro@param latamPorKilometro
/// Es el precio total del viaje por aerolineas ingresado por el usuario anteriormente @param precioAerolineas
/// Es el precio del viaje por aerolineas con 10% de descuento @param aeroConDescuento
/// Es el precio del viaje por aerolineas con 25% de interes @param aeroConInteres
/// Es el precio del viaje por aerolineas expresado en BTC@param aeroEnBTC
/// Es el precio del viaje por aerolineas por kilomertro@param aeroPorKilometro
/// Es la diferencia de precio que hay entre Latam y Aerolineas @param diferenciaDePrecio

void mostrarPreciosEnPantalla(float precioLatam,float latamConDescuento,float latamConInteres,float latamEnBTC
						,float latamPorKilometro,float precioAerolineas,float aeroConDescuento,float aeroConInteres
						,float aeroEnBTC,float aeroPorKilometro,float diferenciaDePrecio)
{
			printf("\n Aerolíneas:"

					"\n Precio de Aerolineas $%.2f"

					"\n\n a) Precio con tarjeta de débito:$%.2f"
					"\n b) Precio con tarjeta de crédito:$%.2f"
					"\n c) Precio pagando con bitcoin: %f BTC"
					"\n d) Precio unitario:$%.2f por kilometro"

					"\n\n Latam:"

					"\n Precio de Latam $%.2f"

					"\n\n a) Precio con tarjeta de débito:$%.2f"
					"\n b) Precio con tarjeta de crédito:$%.2f"
					"\n c) Precio pagando con bitcoin: %f BTC"
					"\n d) Precio unitario:$%.2f por kilometro"

					"\n\n La diferencia de precio es:$%.2f\n"

			,precioAerolineas,aeroConDescuento,aeroConInteres ,aeroEnBTC
			,aeroPorKilometro,precioLatam,latamConDescuento ,latamConInteres
			,latamEnBTC,latamPorKilometro,diferenciaDePrecio);

}

