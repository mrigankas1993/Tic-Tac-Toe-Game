//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
char current_player = 'X';
bool TForm1::CheckIfWinner() {
	if(Button1->Text == Button2->Text && Button1->Text == Button3->Text)
	 return true;
	if(Button4->Text == Button5->Text && Button4->Text == Button6->Text)
	 return true;
	if(Button7->Text == Button8->Text && Button7->Text == Button9->Text)
	 return true;
	if(Button1->Text == Button4->Text && Button1->Text == Button7->Text)
	 return true;
	if(Button2->Text == Button5->Text && Button2->Text == Button8->Text)
	 return true;
	if(Button3->Text == Button6->Text && Button3->Text == Button9->Text)
	  return true;
	if(Button1->Text == Button5->Text && Button1->Text == Button9->Text)
	 return true;
	if(Button3->Text == Button5->Text && Button3->Text == Button7->Text)
	  return true;

	return false;
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
   current->Text = current_player;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ButtonClick(TObject *Sender)
{
   TButton* clickedButton = dynamic_cast<TButton* > (Sender);
   clickedButton->Text = current_player;
   if(CheckIfWinner()) {
	   String c = current_player;
	   winner->Text = "Congratulations " + c + " " + "won";
	   return;
   }
   if(current_player == 'X')
	 current_player = 'O';
   else
   current_player = 'X';
   current->Text = current_player;
}
//-------------------------------------------------------------------------------

