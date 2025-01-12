//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: optionsdialogbase2.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "options_base_dlg2.h"

// Declare the bitmap loading function
extern void wxCrafterx2PVqnInitBitmapResources();

static bool bBitmapLoaded = false;

OptionsBaseDlg2::OptionsBaseDlg2(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos,
                                 const wxSize& size, long style)
    : wxDialog(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxCrafterx2PVqnInitBitmapResources();
        bBitmapLoaded = true;
    }

    wxBoxSizer* mainSizer = new wxBoxSizer(wxVERTICAL);
    this->SetSizer(mainSizer);

    wxBoxSizer* innerSizer = new wxBoxSizer(wxHORIZONTAL);

    mainSizer->Add(innerSizer, 1, wxEXPAND, WXC_FROM_DIP(5));

    m_treeBook = new wxNotebook(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
                                wxNB_MULTILINE | wxBK_DEFAULT);
    m_treeBook->SetName(wxT("m_treeBook"));

    innerSizer->Add(m_treeBook, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));

    wxBoxSizer* btnSizer = new wxBoxSizer(wxHORIZONTAL);

    mainSizer->Add(btnSizer, 0, wxALL | wxALIGN_CENTER, WXC_FROM_DIP(10));

    m_okButton = new wxButton(this, wxID_OK, _("&OK"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);
    m_okButton->SetDefault();

    btnSizer->Add(m_okButton, 0, wxALL, WXC_FROM_DIP(5));

    m_cancelButton =
        new wxButton(this, wxID_CANCEL, _("Cancel"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    btnSizer->Add(m_cancelButton, 0, wxALL, WXC_FROM_DIP(5));

    m_applyButton = new wxButton(this, wxID_APPLY, _("Apply"), wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), 0);

    btnSizer->Add(m_applyButton, 0, wxALL, WXC_FROM_DIP(5));

    SetName(wxT("OptionsBaseDlg2"));
    SetSize(wxDLG_UNIT(this, wxSize(-1, -1)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
    // Connect events
    this->Connect(wxEVT_ACTIVATE, wxActivateEventHandler(OptionsBaseDlg2::OnActivate), NULL, this);
    this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(OptionsBaseDlg2::OnInitDialog), NULL, this);
    m_okButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonOK), NULL, this);
    m_cancelButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonCancel), NULL,
                            this);
    m_applyButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonApply), NULL,
                           this);
}

OptionsBaseDlg2::~OptionsBaseDlg2()
{
    this->Disconnect(wxEVT_ACTIVATE, wxActivateEventHandler(OptionsBaseDlg2::OnActivate), NULL, this);
    this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(OptionsBaseDlg2::OnInitDialog), NULL, this);
    m_okButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonOK), NULL,
                           this);
    m_cancelButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonCancel),
                               NULL, this);
    m_applyButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(OptionsBaseDlg2::OnButtonApply), NULL,
                              this);
}
