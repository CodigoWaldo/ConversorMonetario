#ifndef M_VENTANULI_H
#define M_VENTANULI_H
#include "wxfb_project.h"
#include <vector>

//personalizados
#include "m_ventanuli2.h"
#include "Calculadora.h"

using namespace std;
//Struct para almacenar en cada pos del vector 3 datos distintos (del mismo tipo)
struct Datos_Vector{
	string Pesos,Dolares,Cotizacion;	
};
class m_ventanuli : public ventanuli {	
private:
	//Creaciones de los punteros de ventana y calculadora
	m_ventanuli2 *ventana_config;
	Calculadora *obj_calculadora;
	//Contador para la grilla 
	int Contador_Grilla=0;
	//Vector tipo Datos_Vector para almacenar las conversiones
	vector <Datos_Vector> M_arreglo;	
	//Nombre del archivo por default en caso que no se elija la ruta. en dicho caso se almacenará en la base del programa
	wxString Directorio_Exportacion="Historial de conversion.txt";	
protected:	
	//Metodos de los botones
	void ClickConvertir( wxCommandEvent& event )  override;	
	void Boton_seleccion_exportacion( wxFileDirPickerEvent& event )  override;	
	void Boton_Exportar_TXT( wxCommandEvent& event )  override;		
	void Button_CambiarValor( wxCommandEvent& event )  override;
	void Click_visitar_canal( wxCommandEvent& event )  override;	
	//Metodos internos
	void Actualizar_Grilla(double Pesos);
	string Acortar_Decimales(float value, int cantidad);	
public:
	//Constructor y destructor
	m_ventanuli(wxWindow *parent=NULL);
	~m_ventanuli();
};

#endif

