///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Nov  6 2017)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "wxfb_project.h"

///////////////////////////////////////////////////////////////////////////

ventanuli::ventanuli( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,300 ), wxSize( 600,300 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText2 = new wxStaticText( this, wxID_ANY, wxT("Total ARS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	m_staticText2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Calibri") ) );
	m_staticText2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	
	bSizer4->Add( m_staticText2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_ValorEntrada = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer4->Add( m_ValorEntrada, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer10->Add( bSizer4, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	m_button2 = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("SRC/btn_conv.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer5->Add( m_button2, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer10->Add( bSizer5, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer21;
	bSizer21 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText3 = new wxStaticText( this, wxID_ANY, wxT("Total USD"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	m_staticText3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Calibri") ) );
	
	bSizer21->Add( m_staticText3, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_ValorSalida = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_ValorSalida->Enable( false );
	
	bSizer21->Add( m_ValorSalida, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer10->Add( bSizer21, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	boton23 = new wxButton( this, wxID_ANY, wxT("Ver / Cambiar cotización"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( boton23, 0, wxALL, 5 );
	
	
	bSizer10->Add( bSizer3, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	bSizer2->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText6 = new wxStaticText( this, wxID_ANY, wxT("Historial"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText6->Wrap( -1 );
	m_staticText6->SetFont( wxFont( 9, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false, wxT("Arial Black") ) );
	
	bSizer12->Add( m_staticText6, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	Grilla_Historial = new wxGrid( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	Grilla_Historial->CreateGrid( 0, 3 );
	Grilla_Historial->EnableEditing( false );
	Grilla_Historial->EnableGridLines( true );
	Grilla_Historial->EnableDragGridSize( false );
	Grilla_Historial->SetMargins( 0, 0 );
	
	// Columns
	Grilla_Historial->SetColSize( 0, 70 );
	Grilla_Historial->SetColSize( 1, 70 );
	Grilla_Historial->SetColSize( 2, 90 );
	Grilla_Historial->EnableDragColMove( false );
	Grilla_Historial->EnableDragColSize( false );
	Grilla_Historial->SetColLabelSize( 30 );
	Grilla_Historial->SetColLabelValue( 0, wxT("Pesos") );
	Grilla_Historial->SetColLabelValue( 1, wxT("Dolares") );
	Grilla_Historial->SetColLabelValue( 2, wxT("Cotización") );
	Grilla_Historial->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	Grilla_Historial->EnableDragRowSize( false );
	Grilla_Historial->SetRowLabelSize( 40 );
	Grilla_Historial->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	Grilla_Historial->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	bSizer12->Add( Grilla_Historial, 1, wxALL, 5 );
	
	
	bSizer11->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button5 = new wxButton( this, wxID_ANY, wxT("Exportar TXT"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer13->Add( m_button5, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_dirPicker1 = new wxDirPickerCtrl( this, wxID_ANY, wxEmptyString, wxT("Seleccionar carpeta de guardado"), wxDefaultPosition, wxDefaultSize, wxDIRP_SMALL );
	bSizer13->Add( m_dirPicker1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );
	
	Visitar_canal = new wxBitmapButton( this, wxID_ANY, wxBitmap( wxT("SRC/canal.png"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer13->Add( Visitar_canal, 0, wxALL, 5 );
	
	
	bSizer11->Add( bSizer13, 0, wxEXPAND, 5 );
	
	
	bSizer2->Add( bSizer11, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button2->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::ClickConvertir ), NULL, this );
	boton23->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Button_CambiarValor ), NULL, this );
	m_button5->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Boton_Exportar_TXT ), NULL, this );
	m_dirPicker1->Connect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( ventanuli::Boton_seleccion_exportacion ), NULL, this );
	Visitar_canal->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Click_visitar_canal ), NULL, this );
}

ventanuli::~ventanuli()
{
	// Disconnect Events
	m_button2->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::ClickConvertir ), NULL, this );
	boton23->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Button_CambiarValor ), NULL, this );
	m_button5->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Boton_Exportar_TXT ), NULL, this );
	m_dirPicker1->Disconnect( wxEVT_COMMAND_DIRPICKER_CHANGED, wxFileDirPickerEventHandler( ventanuli::Boton_seleccion_exportacion ), NULL, this );
	Visitar_canal->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli::Click_visitar_canal ), NULL, this );
	
}

ventanuli2::ventanuli2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 255,150 ), wxSize( 255,150 ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText4 = new wxStaticText( this, wxID_ANY, wxT("Cotización actual"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer7->Add( m_staticText4, 0, wxALL, 5 );
	
	Texto_valor_actual = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	Texto_valor_actual->Enable( false );
	
	bSizer7->Add( Texto_valor_actual, 0, wxALL, 5 );
	
	
	bSizer6->Add( bSizer7, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText5 = new wxStaticText( this, wxID_ANY, wxT("Cotización nueva"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer8->Add( m_staticText5, 0, wxALL, 5 );
	
	Texto_valor_nuevo = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer8->Add( Texto_valor_nuevo, 0, wxALL, 5 );
	
	
	bSizer6->Add( bSizer8, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	m_button3 = new wxButton( this, wxID_ANY, wxT("Aceptar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button3, 0, wxALL, 5 );
	
	m_button4 = new wxButton( this, wxID_ANY, wxT("Cerrar"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer9->Add( m_button4, 0, wxALL, 5 );
	
	
	bSizer6->Add( bSizer9, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	this->SetSizer( bSizer6 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_button3->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli2::Boton_Aceptar_V2 ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli2::Boton_Cerrar_V2 ), NULL, this );
}

ventanuli2::~ventanuli2()
{
	// Disconnect Events
	m_button3->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli2::Boton_Aceptar_V2 ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ventanuli2::Boton_Cerrar_V2 ), NULL, this );
	
}
