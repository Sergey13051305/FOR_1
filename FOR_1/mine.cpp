#include<iostream>
#include <windows.h>
using namespace std;
using std::cout;
using std::cin;
//#define Factorial
//#define Exponentiation
//#define ASCII
//#define Fibonacci
//#define Fibonacci_2
//#define Prime_numbers
//#define MULTI_TAB
//#define MULTI_TAB_2
#define MULTI_TAB_3


void main(){
	setlocale(LC_ALL, "Rus");
#ifdef Factorial
	char symbol;
	int num_1, num_2 ,num_3 = 1;
	cout << "Для того чтобы вычеслить факториал, введите например \"5!\": "; cin >> num_1;cin >> symbol;
	cout << num_1 <<symbol << " = ";
	for (num_2 = 1; num_2 <= num_1; num_2++)
	{	
		 num_3 *= num_2;
	}
		cout << num_3 
#endif


#ifdef Exponentiation
		double a,b,z=1,x,d=1, s=1;
		cout << "Введите основание степени: "; cin >> a;
		cout << "Введите показание степени: "; cin >> b;
		d=b;
		for (double c = 0; c > b; c++)
		{
			b *= -1;
		}
		for (double c=0; c<b; c++)
		{
			z *= a;
		}	
		if (d < 0 && d>=-5)
		{
		x = 1 / z;
		cout << x;
		}
		else if (d < -5)
		{
			x = 1 / z;
			s = x + 0.0001;
		cout << s;
		}
		else if (d>=0)
		{
			cout << z;
		}
		
		
			
#endif


#ifdef ASCII
		int num_1=1;
		for (int num_2 = 1; num_2 <= 255; num_2++)
		{	
			if (num_2 <= 13 && num_2>=7)
			{
				continue;
			}
			else if (num_2 >= 14 && num_2 <= 15)
			{
				continue;
			}
			else if (num_2 == 32)
			{
				continue;
			}
			cout << num_1++ << "-"<< "\t" << (char)num_2;
			switch (num_1)
			case 17:  case 33:  case 49:  case 65:  case 81: case 97:
			case 113: case 129: case 145: case 161: case 177:
			case 193: case 209: case 225: case 241: cout << endl;
		}  
#endif				


#ifdef Fibonacci
		cout << "Введите число Фибоначчи: ";
		int a=0,b,c=1,d,f=0,x=0;
		cin >> b;
		for (int i = 0; i < b; i++)
		{	
			a = c;
			c = f;
			f = a + c;
			cout << " " << f;
		}
#endif

#ifdef Fibonacci_2
		cout << "Введите число Фибоначчи: ";
		int a = 0, b, c = 1, f = 0;
		cin >> b;
		for (int i = 0; i < b; i++)
		{
			a = c;
			c = f;
			f = a + c;
			cout << " " << f;
		}
			cout << "- Числел в фибаначи " << b << endl;
#endif

#ifdef Prime_numbers
	while (true)
	{
		cout << "Укажите предел простого числа: " << endl;

	int a = 1, b, z = 1;

	cin >> b;

	for (int i = 1; i < b; i++)
	{
		if (i % 2 == 0)
		{
		}
		else if (i % 3 == 0)
		{
		}
		else
		{
			cout << " " << i;
		}
	}
	cout << endl;

	}
#endif

#ifdef MULTI_TAB
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			if (i < 10)
			{
				cout << " ";
			}
			cout << i << " * ";
				if (j < 10);
			cout << j << " = ";
			if (i * j < 100)cout << " ";
			if (i * j < 10)cout << " ";
			cout << i * j << endl;
		}
		
	}
#endif

#ifdef MULTI_TAB_2
	for (int i = 1; i <=10; i++)
	{
		for (int j = 1; j <=10; j++)
		{
			cout.width(5);
			cout << i * j;
		}
		cout << endl;
	}
#endif

#ifdef MULTI_TAB_3

	int n;
	cout << "Ведите число для ромба: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)cout << " "; cout << " \\";
		{

		}
	}

#endif
}