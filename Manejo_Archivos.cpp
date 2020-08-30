#include "Manejo_Archivos.h"
#include <fstream>
#include <wx/msgdlg.h>

using namespace std;

Manejo_Archivos::Manejo_Archivos() {}
void Manejo_Archivos::Guardar_cotizacion(float value){
	//Se crea un archivo binario y si ya existia uno previo se elimina todo su contenido.
	ofstream file2("cotizacion.bin",ios::binary|ios::trunc);
	//Se guarda en el binario el valor flotante ingresado como parámetro en el método Guardar_cotizacion (value).
	file2.write(reinterpret_cast<char*>(&value),sizeof(float));
	//Se cierra el archivo binario.
	file2.close();	
};
float Manejo_Archivos::Cargar_cotizacion(){	
	//Se abre (si existe) el archivo binario "cotizacion.bin".
	ifstream file("cotizacion.bin",ios::binary);
	//Se añade un if para condicionar el caso en que se haya podido o no abrir el archivo binario.
	if(file.is_open()){
		//Si se pudo abrir, se guarda en un auxiliar el valor leido en el binario y se lo devuelve.
		float aux;
		file.read(reinterpret_cast<char*>(&aux),sizeof(float));
		file.close();
		return aux;		
	}else{
		//En caso de que no se haya podido, se notifica al usuario y se devuelve la cotización con valor = 1.
		wxMessageBox("No se pudo cargar la cotización.","ERROR");
		return 1;
	}	
};
