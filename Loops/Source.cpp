#include <iostream>
#include<conio.h>
using namespace std;
//#define WHILE1
void main()
{
	setlocale(LC_ALL, "");
	#ifdef WHILE1 
	int i = 0; // ������� �����
	int n; //���������� ��������
	cout << "������ ���������� ��������: "; cin >> n;
	while (i<n)
	{
		cout << i << "Loops" << endl;
		i++;
	}
#endif
	char key; //��� ���������� ����� ������� ��� ������� �������
	do
	{
		
			key = _getch();
			cout << (int)key << "\t" << key << endl; //(int)key ��� ����� �������������� ���������� key � ��� ������ int ��� ���� ����� ������� ASCII ��� ������� �������
		} while (true);
		
}