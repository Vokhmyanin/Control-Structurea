#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	char key;

	cout << "Íàæìèòå ëþáóþ êëàâèøó: " << endl;
	do
	{
		key = _getch();
		(int)key;
		
		switch (key)
		{
		case 119:cout << "Ââåðõ"<<endl; break;
		case 115:cout << "Âíèç"<<endl; break;
		case 97:cout << "Âëåâî"<<endl; break;
		case 100:cout << "Âïðàâî"<<endl; break;
		case 32:cout << "Ïðûæîê" << endl; break;
		case 13:cout << "Îãîíü" << endl; break;
		default:cout << "Error"<<endl;
		}
		
	} while (key!=27);
	
		
	// ÊÀÊ ÑÄÅËÀÒÜ ÂÛÕÎÄ ß ÍÅ ÇÍÀÞ(((

 }

	    





