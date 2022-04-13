/*
 ============================================================================
 Name        : TP_[1].c
 Author      : Lautaro Tedesco
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca_UTN.h"

int main(void) {

	int opciones;
	float cantidadKilometros=0;
	int banderaKilometros=1;
	float precioLatam=0;
	float precioAerolineas=0;
	int banderaPrecio=1;
	float latamConDescuento;
	float latamConInteres;
	float latamEnBTC;
	float latamPorKilometro;
	float aeroConDescuento;
	float aeroConInteres;
	float aeroEnBTC;
	float aeroPorKilometro;
	float diferenciaDePrecio;
	int banderaCalculo=1;
	int bandera=1;

		setbuf(stdout,NULL);


		while(bandera==1)
		{

			opciones=menuAerolineas(cantidadKilometros,precioAerolineas,precioLatam);

			switch(opciones)
			{
				case 1:

					cantidadKilometros=pedirFloatAlUsuario(0.0,40008.0,"Ingrese la cantidad de kilometros a recorrer: ","Error, Ingrese la cantidad de kilometros a recorrer: ");
					banderaKilometros=0;

					break;

				case 2:

					precioAerolineas=pedirFloatAlUsuario(0.0,999999999.0,"Ingrese el precio de vuelo de Aerolineas: $ ","Error, Ingrese el precio de vuelo de Aerolineas: $ ");
					precioLatam=pedirFloatAlUsuario(0.0,999999999.0,"Ingrese el precio de vuelo de Latam: $ ","Error, Ingrese el precio de vuelo de Latam: $ ");
					banderaPrecio=0;

					break;

				case 3:

					if(banderaKilometros==0 && banderaPrecio==0)
					{
						latamConDescuento=restarPorcentaje(precioLatam,10);
						latamConInteres=sumarPorcentaje(precioLatam,25);
						latamEnBTC=calculoBTC(precioLatam);
						latamPorKilometro=dividirFloat(precioLatam,cantidadKilometros);

						aeroConDescuento=restarPorcentaje(precioAerolineas,10);
						aeroConInteres=sumarPorcentaje(precioAerolineas,25);
						aeroEnBTC=calculoBTC(precioAerolineas);
						aeroPorKilometro=dividirFloat(precioAerolineas,cantidadKilometros);

						diferenciaDePrecio=restarFloats(precioLatam,precioAerolineas);

						printf( "                   __|__\n"
								"            ----oo--(_)--oo----\n"
								"           . . . Calculando . . .\n");

						banderaCalculo=0;
					}
					else
					{
						printf("Faltan datos para poder calcular");
					}

					break;

				case 4:

					if(banderaCalculo==0)
					{
						mostrarPreciosEnPantalla(precioLatam,latamConDescuento,latamConInteres,latamEnBTC
												,latamPorKilometro,precioAerolineas,aeroConDescuento,aeroConInteres
												,aeroEnBTC,aeroPorKilometro,diferenciaDePrecio);
					}
					else
					{
						printf("Falta calcular para poder informar los resultados");
					}

					break;

				case 5:

					cantidadKilometros=7090;
					precioLatam=159339;
					precioAerolineas=162965;

					latamConDescuento=restarPorcentaje(precioLatam,10);
					latamConInteres=sumarPorcentaje(precioLatam,25);
					latamEnBTC=calculoBTC(precioLatam);
					latamPorKilometro=dividirFloat(precioLatam,cantidadKilometros);

					aeroConDescuento=restarPorcentaje(precioAerolineas,10);
					aeroConInteres=sumarPorcentaje(precioAerolineas,25);
					aeroEnBTC=calculoBTC(precioAerolineas);
					aeroPorKilometro=dividirFloat(precioAerolineas,cantidadKilometros);

					diferenciaDePrecio=restarFloats(precioLatam,precioAerolineas);

					mostrarPreciosEnPantalla(precioLatam,latamConDescuento,latamConInteres,latamEnBTC
											,latamPorKilometro,precioAerolineas,aeroConDescuento,aeroConInteres
											,aeroEnBTC,aeroPorKilometro,diferenciaDePrecio);

					break;

				case 6:

					bandera=0;

					break;

			}




		}

		printf("Usted Salio del Programa");

	return EXIT_SUCCESS;
}
