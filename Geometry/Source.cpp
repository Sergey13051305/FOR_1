#include<iostream>
using std::cin;
using std::cout;
using std::endl;


void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "¬ведите размер фигуры: "; cin >> n;

	int num_1 = 1;
	for (int num_2 = 1; num_2 <= 255; num_2++)
	{
		if (num_2 <= 13 && num_2 >= 7)
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
		cout << num_1++ << "-" << "\t" << (char)num_2;
		switch (num_1)
			case 17:  case 33:  case 49:  case 65:  case 81: case 97:
			case 113: case 129: case 145: case 161: case 177:
			case 193: case 209: case 225: case 241: cout << endl;
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
		cout << "* ";
		}
		cout << "\n";
	}
}