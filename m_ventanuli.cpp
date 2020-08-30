#include "m_ventanuli.h"
#include <wx/valtext.h>
#include <wx/msgdlg.h>
#include <fstream>
#include "windows.h"
//personalizados
#include "Calculadora.h"
#include "m_ventanuli2.h"
using namespace std;

m_ventanuli::m_ventanuli(wxWindow *parent) : ventanuli(parent) {	
	//Validador de entrada de numeros.
	wxTextValidator v(wxFILTER_NUMERIC);
	m_ValorEntrada->SetValidator(v);
	//Creacion del objeto dinámico de la clase calculadora.
	obj_calculadora = new Calculadora();
	//Asignación de un puntero nulo a la ventana de configuración. 
	ventana_config = nullptr; 
}
void m_ventanuli::ClickConvertir( wxCommandEvent& event )  {	
	//Variables.
	double Valor_Entrada_D;
	//Obtencion datos.
	m_ValorEntrada-> GetValue().ToDouble(&Valor_Entrada_D);
	//Calculo.
	obj_calculadora->Calcular((float)Valor_Entrada_D);		
	//Mostrar resultado.	
	m_ValorSalida->SetValue(this->Acortar_Decimales(obj_calculadora->Ver_Cantidad(),3));	
	//Llamado al método actualizacion de la grilla.
	this->Actualizar_Grilla(Valor_Entrada_D);	
}
void m_ventanuli::Actualizar_Grilla(double Pesos){
	//Auxiliar de tipo Datos_Vector (para guardar en el vector).
	Datos_Vector str_auxiliar;
	//Se le agrega una fila vacia a la grilla
	Grilla_Historial->AppendRows(1);
	//se crea un auxiliar tipo wxstring para rellenar la grilla
	wxString String_Grilla;	
	//Manejo de los Pesos.
	//se obtiene el valor a mostrar, se lo guarda en el auxiliar Datos_Vector en pesos y luego se lo solicita para actualizar la grilla.
	//finalmente se limpia el auxiliar wxstring String_Grilla.
	str_auxiliar.Pesos=this->Acortar_Decimales(Pesos,3);	
	String_Grilla<<str_auxiliar.Pesos;	
	Grilla_Historial->SetCellValue(Contador_Grilla,0,String_Grilla);
	String_Grilla.Clear();	
	//Manejo de los dolares.
	//se obtiene el valor a mostrar, se lo guarda en el auxiliar Datos_Vector en dolares y luego se lo solicita para actualizar la grilla.
	//finalmente se limpia el auxiliar wxstring String_Grilla.
	str_auxiliar.Dolares=this->Acortar_Decimales(obj_calculadora->Ver_Cantidad(),3);	
	String_Grilla<<str_auxiliar.Dolares;
	Grilla_Historial->SetCellValue(Contador_Grilla,1,String_Grilla);
	String_Grilla.Clear();
	//Manejo de la cotización.
	//se obtiene el valor a mostrar, se lo guarda en el auxiliar Datos_Vector en Cotizacion y luego se lo solicita para actualizar la grilla.
	//finalmente se limpia el auxiliar wxstring String_Grilla.	
	str_auxiliar.Cotizacion=this->Acortar_Decimales(obj_calculadora->Ver_cotizacion(),3);	
	String_Grilla<<str_auxiliar.Cotizacion;
	Grilla_Historial->SetCellValue(Contador_Grilla,2,String_Grilla);
	String_Grilla.Clear();	
	//se le añade +1 al contador de la grilla.
	Contador_Grilla++;	
	//se guardan los datos obtenidos que se mostraron en la grilla como nuevo elemento del vector M_arreglo.
	M_arreglo.push_back(str_auxiliar);	
};
void m_ventanuli::Boton_Exportar_TXT( wxCommandEvent& event )  {	
	//si el vector M_arreglo tiene elementos se exporta el archivo, de lo contrario no sucede nada.
	if(M_arreglo.size()!=0){
		//se solicita la ruta donde se exportará y se lo convierte a string para guardarlo en un auxiliar string dire.
		string dire=string(Directorio_Exportacion);
		//se crea el archivo en la direccion dire con el nombre y si habia uno previo se elimina su contenido con la bandera trunc.
		ofstream Archivo(dire,ios::trunc);
		//se recorre el vector y se va escribiendo en el txt cada conversion realizada.
		for(int i=0;i<M_arreglo.size();i++) { 			
			Archivo<<i+1<<": "<<M_arreglo[i].Pesos<<" ARS = "<<M_arreglo[i].Dolares<<" USD. Cotización: 1 usd = "<<M_arreglo[i].Cotizacion<<" ARS."<<endl;				
		}				
		//una vez recorrido, se agrega un mensaje al final (opcional).
		Archivo<<"YT: El codigo waldo.";
		//se avisa al usuario que el archivo se exportó correctamente.
		wxMessageBox("Se exportó el historial","EXITO");
		//se concluye el uso del archivo txt.
		Archivo.close();		
	}	
}
void m_ventanuli::Button_CambiarValor( wxCommandEvent& event )  {
	//se crea un nuevo constructor enviando el puntero dinámico de la calculadora.
	ventana_config = new m_ventanuli2(obj_calculadora,this);
	//se muestra la ventana.
	ventana_config ->Show();
}
void m_ventanuli::Boton_seleccion_exportacion( wxFileDirPickerEvent& event )  {
	//se obtiene la ruta elegida por el usuario y se la guarda en una variable wxstring.
	Directorio_Exportacion=m_dirPicker1->GetPath();
	//	se le suma a la ruta de exportacion el nombre del archivo separado de un slash (\).
	Directorio_Exportacion=Directorio_Exportacion+"\\"+"Historial de conversion.txt";	
	//esto se puede hacer en una linea pero es para que se entienda mejor cada paso.	//Directorio_Exportacion=(m_dirPicker1->GetPath())+"\\"+"Historial de conversion.txt";	
}
void m_ventanuli::Click_visitar_canal( wxCommandEvent& event )  {	
	//Comando para la que windows abra el sitio web automáticamente.
	//Nota: si genera un error relacionado a convertir char* a wchar_t* se debe anteponer un L a cada constante de texo (como en este caso)
	ShellExecute(NULL, L"open", L"https://www.youtube.com/channel/UC7_RZNpmQkc3ZdxuyzFJNEg",NULL, NULL, SW_SHOWNORMAL);	
    //#include "windows.h"	
}
string m_ventanuli::Acortar_Decimales(float value, int cantidad){
	//Convierte el flotante a string
	string aux=to_string(value);
	//Busca la posicion del punto que separa el entero de los decimales
	size_t pos=aux.find('.'); 	
	//Elimina desde pos x cantidad + 1 todo hasta el final 
	aux.erase(pos+cantidad+1);
	//Se devuelve un numero con cantidad+1 de decimales en formato string
	return aux;	
}
m_ventanuli::~m_ventanuli() {
	//destructor
}

