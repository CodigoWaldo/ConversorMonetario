///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WXFB_PROJECT_H__
#define __WXFB_PROJECT_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/grid.h>
#include <wx/filepicker.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ventanuli
///////////////////////////////////////////////////////////////////////////////
class ventanuli : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText2;
		wxTextCtrl* m_ValorEntrada;
		wxBitmapButton* m_button2;
		wxStaticText* m_staticText3;
		wxTextCtrl* m_ValorSalida;
		wxButton* boton23;
		wxStaticText* m_staticText6;
		wxGrid* Grilla_Historial;
		wxButton* m_button5;
		wxDirPickerCtrl* m_dirPicker1;
		wxBitmapButton* Visitar_canal;
		
		// Virtual event handlers, overide them in your derived class
		virtual void ClickConvertir( wxCommandEvent& event ) { event.Skip(); }
		virtual void Button_CambiarValor( wxCommandEvent& event ) { event.Skip(); }
		virtual void Boton_Exportar_TXT( wxCommandEvent& event ) { event.Skip(); }
		virtual void Boton_seleccion_exportacion( wxFileDirPickerEvent& event ) { event.Skip(); }
		virtual void Click_visitar_canal( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ventanuli( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("CONVERSOR MONETARIO"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 600,300 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ventanuli();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class ventanuli2
///////////////////////////////////////////////////////////////////////////////
class ventanuli2 : public wxFrame 
{
	private:
	
	protected:
		wxStaticText* m_staticText4;
		wxTextCtrl* Texto_valor_actual;
		wxStaticText* m_staticText5;
		wxTextCtrl* Texto_valor_nuevo;
		wxButton* m_button3;
		wxButton* m_button4;
		
		// Virtual event handlers, overide them in your derived class
		virtual void Boton_Aceptar_V2( wxCommandEvent& event ) { event.Skip(); }
		virtual void Boton_Cerrar_V2( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		ventanuli2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("config"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 255,150 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		
		~ventanuli2();
	
};

#endif //__WXFB_PROJECT_H__
