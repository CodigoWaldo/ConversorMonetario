#ifndef M_VENTANULI2_H
#define M_VENTANULI2_H
#include "wxfb_project.h"
#include "Calculadora.h"
#include "Manejo_Archivos.h"

class m_ventanuli2 : public ventanuli2 {	
private:
	//Se crea un puntero tipo Calculadora
	Calculadora *obj_calculadora_v2;
	//Se crea un objeto estático tipo Manejo_Archivos
	Manejo_Archivos MA_Objeto;	
protected:
	//Metodos de los botones
	void Boton_Aceptar_V2( wxCommandEvent& event )  override;
	void Boton_Cerrar_V2( wxCommandEvent& event )  override;	
public:
	m_ventanuli2(Calculadora *obj_calculadora,wxWindow *parent=NULL);
	~m_ventanuli2();
};

#endif

