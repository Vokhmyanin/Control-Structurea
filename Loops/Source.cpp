#include <iostream>
#include<conio.h>
using namespace std;
//#define WHILE1
void main()
{
	setlocale(LC_ALL, "");
	#ifdef WHILE1 
	int i = 0; // счетчик цикла
	int n; //количество итераций
	cout << "Ведите количество итераций: "; cin >> n;
	while (i<n)
	{
		cout << i << "Loops" << endl;
		i++;
	}
#endif
	char key; //эта переменная будет хранить код нажатой клавищи
	do
	{
		
			key = _getch();
			cout << (int)key << "\t" << key << endl; //(int)key это явное преобразование переменной key в тип данных int для того чтобы увидеть ASCII код нажатой клавиши
		} while (true);
		
}