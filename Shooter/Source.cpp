#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "");
	char key;

	cout << "������� ����� �������: " << endl;
	do
	{
		key = _getch();
		(int)key;
		
		switch (key)
		{
		case 119:cout << "�����"<<endl; break;
		case 115:cout << "����"<<endl; break;
		case 97:cout << "�����"<<endl; break;
		case 100:cout << "������"<<endl; break;
		case 32:cout << "������" << endl; break;
		case 13:cout << "�����" << endl; break;
		default:cout << "Error"<<endl;
		}
		
	} while (key!=27);
	
		
	// ��� ������� ����� � �� ����(((

 }

	    





