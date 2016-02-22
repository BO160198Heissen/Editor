//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "ABOUT.cpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditor *Editor;
//---------------------------------------------------------------------------
__fastcall TEditor::TEditor(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TEditor::About1Click(TObject *Sender)
{
 Application->CreateForm(__classid(TAboutBox),&AboutBox);
 AboutBox->ShowModal();
 AboutBox->Free();
}
//---------------------------------------------------------------------------
void __fastcall TEditor::ToolButton4Click(TObject *Sender)
{
 Application->CreateForm(__classid(TAboutBox),&AboutBox);
 AboutBox->ShowModal();
 AboutBox->Free();
}
//---------------------------------------------------------------------------
void __fastcall TEditor::New1Click(TObject *Sender)
{
 if (Memo1->Lines->Count>0)
 {
	 if(SaveDialog1->Execute())
{
  Memo1->Lines->SaveToFile(SaveDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=SaveDialog1->FileName;
}
 }
 Memo1->Clear();
 StatusBar1->Panels->Items[0]->Text="Безымянный документ";
}
//---------------------------------------------------------------------------
void __fastcall TEditor::ToolButton1Click(TObject *Sender)
{
if(OpenDialog1->Execute())
{
  Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=OpenDialog1->FileName;
}
}
//---------------------------------------------------------------------------

void __fastcall TEditor::ToolButton2Click(TObject *Sender)
{
if(SaveDialog1->Execute())
{
  Memo1->Lines->SaveToFile(SaveDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=SaveDialog1->FileName;
}
}
//---------------------------------------------------------------------------

void __fastcall TEditor::ToolButton5Click(TObject *Sender)
{
Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::ToolButton6Click(TObject *Sender)
{
Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::ToolButton7Click(TObject *Sender)
{
Memo1->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::Copy1Click(TObject *Sender)
{
Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::Cut1Click(TObject *Sender)
{
Memo1->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::Paste1Click(TObject *Sender)
{
Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TEditor::Exit1Click(TObject *Sender)
{
exit(0);
}
//---------------------------------------------------------------------------

void __fastcall TEditor::ToolButton3Click(TObject *Sender)
{
 if (Memo1->Lines->Count>0)
 {
	 if(SaveDialog1->Execute())
{
  Memo1->Lines->SaveToFile(SaveDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=SaveDialog1->FileName;
}
 }
 Memo1->Clear();
 StatusBar1->Panels->Items[0]->Text="Безымянный документ";
}
//---------------------------------------------------------------------------

void __fastcall TEditor::Open1Click(TObject *Sender)
{
 if(OpenDialog1->Execute())
{
  Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=OpenDialog1->FileName;
}
}
//---------------------------------------------------------------------------

void __fastcall TEditor::a1Click(TObject *Sender)
{
if(SaveDialog1->Execute())
{
  Memo1->Lines->SaveToFile(SaveDialog1->FileName);
  StatusBar1->Panels->Items[0]->Text=SaveDialog1->FileName;
}
}
//---------------------------------------------------------------------------


