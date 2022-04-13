/*
 * Biblioteca_UTN.h
 *
 *  Created on: Apr 11, 2022
 *      Author: Lautaro Tedesco
 */

#ifndef BIBLIOTECA_UTN_H_
#define BIBLIOTECA_UTN_H_

int menuAerolineas(float cantidadKilometros,float precioLatam,float precioAerolineas);
int pedirEnteroAlUsuario(int min,int max,char mensaje[200],char mensajeDeError[200]);
float pedirFloatAlUsuario(float min,float max,char mensaje[200],char mensajeDeError[200]);
char pedirUnCaracterAlUsuario(char mensaje[200]);
float multiplicarFloats(float nro1, float nro2);
float restarPorcentaje(float numero, int porcentajeARestar);
float sumarPorcentaje(float numero, int porcentajeASumar);
float calculoBTC(float cantidadPesos);
float dividirFloat(float nro1, float nro2);
float restarFloats(float nro1,float nro2);
void mostrarPreciosEnPantalla(float precioLatam,float latamConDescuento,float latamConInteres,float latamEnBTC
						,float latamPorKilometro,float precioAerolineas,float aeroConDescuento,float aeroConInteres
						,float aeroEnBTC,float aeroPorKilometro,float diferenciaDePrecio);

#endif /* BIBLIOTECA_UTN_H_ */
