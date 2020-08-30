#include "m_ventanuli2.h"
#include "Calculadora.h"
#include <wx/valtext.h>
#include <wx/msgdlg.h>

m_ventanuli2::m_ventanuli2(Calculadora *obj_calculadora,wxWindow *parent) : ventanuli2(parent) {	
	//Se le asigna al objeto dinámico calculadora el puntero utilizado por la ventana principal
	obj_calculadora_v2 = obj_calculadora;	
	//Se crea un auxiliar que almacene la cotización y luego se la muestra en Texto_valor_actual.
	wxString aux;
	aux<<"1 USD= "<<(obj_calculadora_v2->Ver_cotizacion());		
	Texto_valor_actual->SetValue(aux);	
	//Filtro numerico en entrada de la nueva cotizacion.
	wxTextValidator v(wxFILTER_NUMERIC);
	Texto_valor_nuevo->SetValidator(v);
}
void m_ventanuli2::Boton_Aceptar_V2( wxCommandEvent& event )  {
	//Se crea una variable tipo double para que se almacene la cotizacion nueva.
	double value;
	Texto_valor_nuevo->GetValue().ToDouble(&value);
	//Se establece un condicionante if para el valor ingresado
	if(value==0 || value<0){
		wxMessageBox("el valor no puede ser 0 o negativo","ERROR");
	}else{
		//Se le cambia la cotizacion a calculadora
		obj_calculadora_v2->Cambiar_cotizacion(float(value));	
		//Se crea un auxiliar que almacene la cotización y luego se la muestra en Texto_valor_actual.
		wxString aux;
		aux<<"1 USD= "<<(obj_calculadora_v2->Ver_cotizacion());		
		Texto_valor_actual->SetValue(aux);
		//Se guarda la cotización en un binario.
		MA_Objeto.Guardar_cotizacion(float(value));
	}
}

void m_ventanuli2::Boton_Cerrar_V2( wxCommandEvent& event )  {
	//Función para cerrar la ventana.
	this->Close();	
}

m_ventanuli2::~m_ventanuli2() {
	//Destructor.
}
