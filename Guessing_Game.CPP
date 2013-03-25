//Guessing Game
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
	void color()
	{
	unsigned t=time(NULL);
	srand(t);
	int a=rand()/100%15+1;
	textcolor(a);
	}

	void reet()
	{
	textcolor(7);
	clrscr();
	gotoxy(1,25);
	_setcursortype(_NOCURSOR);
	textcolor(7);
	cout<<"\n\n\nThanks for playing the game!!!";
	cout<<"\t\t\t\t\tCREATED BY ";
	color();
	cprintf("Reet Awwsum");
	getch();
	exit(0);
	}

void main()
{
clrscr();
color();
gotoxy(35,12);
cprintf("GUESSING GAME");
cout<<endl;
cout<<"\t\t\t--*--*--*--*--*--*--*--*--*--*--";
_setcursortype(_NOCURSOR);
int g=getch();

	if (g==27)
	reet();

textcolor(7);
loop:
clrscr();
_setcursortype(_NOCURSOR);
for (int r=1; r<4; r++)
	{
	textcolor(7);
	clrscr();
	textcolor(12);
	gotoxy(35,12);
	cprintf("LOADING");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	cprintf(".");
	delay(520);
	}
textcolor(7);
clrscr();
_setcursortype(_NORMALCURSOR);
char flag;
int max=50,min=1,a;
unsigned t=time(NULL);
srand(t);
int range=max-min+1;
int h=rand()/100%range+min;
color();
cout<<"\t\t\t\t";
cprintf("GUESSING GAME");
cout<<"\n\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\nThere is a hidden no. you have 5 turns to guess that no.\nHINT:-The no. is between 1-50";
	for (int i=1; i<=5; i++)
	{
	cout<<"\n\nguess the no.";
	cin>>a;
		if (a==h)
		{
		cout<<"\n\nyour guess is correct.. you ";
		color();
		cprintf("WIN !!!");
		goto loop1;
		}

		if (a<h)
		{
		cout<<"\nyour guess is lesser than the hidden no. ";
		}

		if (a>h)
		{
		cout<<"\nyour guess is bigger than the hidden no. ";
		}

		if (i!=5)
		{
		cout<<"\n\ntry again";
		}

	 }
cout<<"\n\nOops you have used all your turns ...\n\t\t\t\t";
color();
cprintf("YOU ARE A LOSER");
cout<<"\nthe hidden no. is "<<h;
loop1:
cout<<"\n\nDo you want to play again (Y/N) :";
flag=getch();
	if (flag=='Y'||flag=='y')
	{
	textcolor(7);
	goto loop;
	}
	else
	{
	textcolor(7);
	clrscr();
	gotoxy(1,25);
	_setcursortype(_NOCURSOR);
	textcolor(7);
	cout<<"\n\n\nThanks for playing the game!!!";
	cout<<"\t\t\t\t\tCREATED BY ";
	color();
	cprintf("REET");
	}
getch();
}