//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Grids.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TMenuItem *N1;
	TMenuItem *N2;
	TMenuItem *N4;
	TMenuItem *N3;
	TMenuItem *N5;
	TMenuItem *N6;
	TMenuItem *N7;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TLabel *Label4;
	TLabel *Label5;
	TLabel *Label6;
	TStringGrid *StringGrid1;
	TStringGrid *StringGrid2;
	TEdit *Edit1;
	TEdit *Edit2;
	TEdit *Edit3;
	TEdit *Edit4;
	TStringGrid *StringGrid3;
	void __fastcall N7Click(TObject *Sender);
	void __fastcall N6Click(TObject *Sender);
	void __fastcall N4Click(TObject *Sender);
	void __fastcall N5Click(TObject *Sender);
	void __fastcall StringGrid3DrawCell(TObject *Sender, int ACol, int ARow,
          TRect &Rect, TGridDrawState State);
	void __fastcall StringGrid3SelectCell(TObject *Sender, int ACol, int ARow,
          bool &CanSelect);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	int kind_of_tetramino;
	void Game(void);
	const static int figures[7][4];
	struct Point;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
