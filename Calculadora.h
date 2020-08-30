#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
public:
	Calculadora();
	void Calcular(float pesos);
	float Ver_Cantidad();
	void  Cambiar_cotizacion(float pesos);
	float Ver_cotizacion();
private:
	float Dolares;
	float Cotizacion=1;
	
};

#endif

