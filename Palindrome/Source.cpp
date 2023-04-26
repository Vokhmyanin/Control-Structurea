#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int number;      //Число, введенное с клавиатуры
	cout << "Введите число: "; cin >> number;
	int buffer = number;
	int reverse=0;
	while (buffer > 0)
	{
		reverse *= 10;   //сдвигаем число на 1 разряд влево
		reverse += buffer % 10; //добавляем следующий разряд
		buffer /= 10;           //удаляем полученный разряд из исходного числа(в противном случае мы будет получать один и тот же разряд
	}
	cout << number << endl;
	cout << buffer << endl;
	cout << reverse << endl;

}

