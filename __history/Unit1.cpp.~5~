//---------------------------------------------------------------------------

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

int TForm1::figures[7][4] =
{
   {1, 3, 5, 7},   // I
   {2, 4, 5, 7},   // Z
   {3, 5, 4, 6},   // S
   {3, 5, 4, 7},   // T
   {2, 3, 5, 7},   // L
   {3, 5, 7, 6},   // J
   {2, 3, 4, 5}    // O
};

void TForm1::Game(void)
{
	count_hold = 0;
	int p = 0, ri = -1;
	int n[2];
	for (int i = 0; i < 2; i++)
		 n[i] = rand() % 7;
	while (1)
	{
		 for (int i = 0; i < 4; i++)
		 {
			a[i].x = figures[n[0]][i] % 2 + 5;
			a[i].y = figures[n[0]][i] / 2 + 5;
		 }
		 speed = 30;
		 for (int i = 1; i <= 5; i++)
			flags[i] = false;

		 while (1) // Àíèìàöèÿ ïàäåíèÿ ôèãóðû
		 {

			tetro_block(n[1], 15.7); // Ðèñîâàíèå âòîðîãî òåòðàìèíî â îêíî ñëåäóþùèõ ôèãóð

			n[0] = check_hold(n[0]); // Äîáàâëåíèå ôèãóðû â áëîê óäåðæàíèÿ
            if (flags[3]) // Áëîê óäåðæàíèÿ ñâîáîäåí
            {
			   for (int i = 0; i < 2; i++)
				  n[i] = rand() % 7;
			   p = 1 - p;
			   break;
            }
            if (flags[5]) // Áëîê óäåðæàíèÿ çàíÿò
			{
               p = 1 - p;
               break; 
			}

			filling_field();
			if (flags[4]) results();
            if (flags[0]) break;

			for (int i = 0; i < 4; i++) //  Ðèñîâàíèå ïàäàþùåé ôèãóðû
			   tetro(a[i].x, a[i].y, Color[n[0]].r, Color[n[0]].g, Color[n[0]].b);

			for (int i = 0; i < 4; i++) //  Ïàäåíèå ôèãóðû
            {
               b[i] = a[i];
			   if (speed == 30)
               {
                  if (count_page % k == 0)
					 a[i].y++;
               }
			   else a[i].y++;
			}
            
            if (!check()) // Ôèãóðà óïàëà
			{
			   flags[6] = false;
               flags[2] = true;
			   score += 10; // Íà÷èñëåíèå áàëëîâ çà îäíó óïàâøóþ ôèãóðó
               for (int i = 0; i < 4; i++)
               {
				  a[i] = b[i];
				  field[a[i].y][a[i].x] = n[0]; // Îïðåäåëåíèå öâåòà ÷àñòè ïîëÿ, êóäà óïàëà ôèãóðà
               }
			   n[0] = n[1];
               n[1] = rand() % 7;
			   p = 1 - p;
			   break;
			}
			delay(speed);

			if (speed != 1)
			   speed = 30;

			if (mousebuttons()) game_bottom();
			while (kbhit()) move();
   } while (true);
   return 0;
}

}