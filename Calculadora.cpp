#include "Calculadora.h"
#include "Manejo_Archivos.h"

Calculadora::Calculadora() {	
	Manejo_Archivos MA_Objeto;
	Cotizacion=(MA_Objeto.Cargar_cotizacion());
	
}

void Calculadora::Calcular(float pesos){	
	Dolares = pesos/Cotizacion;	
};

float Calculadora::Ver_Cantidad(){
	return Dolares;
};

void Calculadora::Cambiar_cotizacion(float pesos){
	Cotizacion=pesos;
}

float Calculadora::Ver_cotizacion(){
	return Cotizacion;
};
