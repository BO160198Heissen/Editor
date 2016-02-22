//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TEditor : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TStatusBar *StatusBar1;
	TToolBar *ToolBar1;
	TImageList *ImageList1;
	TMemo *Memo1;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TMenuItem *File1;
	TMenuItem *New1;
	TMenuItem *Open1;
	TMenuItem *Exit1;
	TMenuItem *Edit1;
	TMenuItem *Copy1;
	TMenuItem *Paste1;
	TMenuItem *Cut1;
	TMenuItem *About1;
	TMenuItem *a1;
	TToolButton *ToolButton1;
	TToolButton *ToolButton2;
	TToolButton *ToolButton3;
	TToolButton *ToolButton4;
	TToolButton *ToolButton5;
	TToolButton *ToolButton6;
	TToolButton *ToolButton7;
	TToolButton *ToolButton8;
	TToolButton *ToolButton9;
	void __fastcall About1Click(TObject *Sender);
	void __fastcall ToolButton4Click(TObject *Sender);
	void __fastcall New1Click(TObject *Sender);
	void __fastcall ToolButton1Click(TObject *Sender);
	void __fastcall ToolButton2Click(TObject *Sender);
	void __fastcall ToolButton5Click(TObject *Sender);
	void __fastcall ToolButton6Click(TObject *Sender);
	void __fastcall ToolButton7Click(TObject *Sender);
	void __fastcall Copy1Click(TObject *Sender);
	void __fastcall Cut1Click(TObject *Sender);
	void __fastcall Paste1Click(TObject *Sender);
	void __fastcall Exit1Click(TObject *Sender);
	void __fastcall ToolButton3Click(TObject *Sender);
	void __fastcall Open1Click(TObject *Sender);
	void __fastcall a1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TEditor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TEditor *Editor;
//---------------------------------------------------------------------------
#endif
