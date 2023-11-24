﻿//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TForm1::N7Click(TObject *Sender)
{
  Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N6Click(TObject *Sender)
{
	Form3->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N4Click(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
	 kind_of_tetramino = rand() % 5;
	 TColor Colors[ ] = {clRed, clGreen, clBlue, clYellow,
	 clBlack};
	 int i, j;
	 for (i = 0; i < 10; i++) {
		 for (j = 0; j < 20; j++) {
			StringGrid3->Cells[i][j] = 0;
		 }
	 }
	 Form1->Invalidate();
	 Game();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid3DrawCell(TObject *Sender, int ACol, int ARow,
	  TRect &Rect, TGridDrawState State)
{
	if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 1)
		 StringGrid3 ->Canvas->Brush->Color = clRed;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 2)
		 StringGrid3 ->Canvas->Brush->Color = clBlue;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 3)
		 StringGrid3 ->Canvas->Brush->Color = clGreen;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 4)
		 StringGrid3 ->Canvas->Brush->Color = clYellow;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 5)
		 StringGrid3 ->Canvas->Brush->Color = clFuchsia;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 6)
		 StringGrid3 ->Canvas->Brush->Color = clLime;
	else if(StringGrid3 ->Cells[ACol][ARow].ToIntDef(0) == 7)
		 StringGrid3 ->Canvas->Brush->Color = clAqua;
	else
		 StringGrid3 ->Canvas->Brush->Color = clWindow;
	 StringGrid3 ->Canvas->FillRect(Rect);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StringGrid3SelectCell(TObject *Sender, int ACol,
      int ARow, bool &CanSelect)
{
	StringGrid3->Cells[ACol][ARow] = 0;
	Form1->Invalidate();
}
//--------------------------------------------------------------------------

struct TForm1::Point
{
   int x, y;
} a[4], b[4], c[4];

const int TForm1::figures[7][4] =
	{
		1, 3, 5, 7,   // I
		2, 4, 5, 7,   // Z
		3, 5, 4, 6,   // S
		3, 5, 4, 7,   // T
		2, 3, 5, 7,   // L
		3, 5, 7, 6,   // J
		2, 3, 4, 5    // O
	};

void TForm1::Game(void)
{
	int p = 0, ri = -1;
	int n[2];
	for (int i = 0; i < 2; i++)
		 n[i] = rand() % 7;
	for (int i = 0; i < 4; i++)
	{
		StringGrid3->Cells[figures[n[0]][i] % 2 + 4][figures[n[0]][i] / 2 - 1] = n[0];
		Form1->Invalidate();
		StringGrid3->Cells[figures[n[0]][i] % 2 + 4][figures[n[0]][i] / 2 - 1] = n[0];
	}

}