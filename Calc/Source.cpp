#include <iostream>
using namespace std;
//#define calc_if
#define calc_switch
void main()
{
	setlocale(LC_ALL, "");
#ifdef calc_if

	cout << "Calc" << endl;
	double a, b; // числа вводимые с клавиатуры
	char s; //sign - знак операции
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	if (s == '+')
	{
		cout << a << "+" << b << "=" << a + b << endl;
	}
	else if (s == '-')
	{
		cout << a << "-" << b << "=" << a - b << endl;
	}
	else if (s == '*')
	{
		cout << a << "*" << b << "=" << a * b << endl;
	}
	else if (s == '/')
	{
		cout << a << "/" << b << "=" << a / b << endl;
	}
	else
	{
		cout << "Error:No operation" << endl;
	}
}
#endif
#ifdef calc_switch

	cout << "Calc_switch" << endl;
	double a, b, c; char s;
	cout << "¬ведите простое арифметическое выражение: ";
	cin >> a >> s >> b;
	switch (s)
	{
	case '+':  cout << a + b << endl;  break;
	case '-':  cout << a - b << endl; break;
	case '*':  cout << a * b << endl; break;
	case '/':  cout << a / b << endl; break;
	default: cout << "Error" << endl;
	}
#endif
}
