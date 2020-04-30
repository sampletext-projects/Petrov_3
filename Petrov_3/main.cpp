// .cpp : main project file.
// Программа 
// Автор: 

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Автор: Петров Александр Константинович\n";
	cout << "Программа для расчёта срока обучения\n";

	int n1, n2, m, n;
	cout << "N1: ";
	cin >> n1;
	cout << "N2: ";
	cin >> n2;
	cout << "M: ";
	cin >> m;
	cout << "N: ";
	cin >> n;

	while (n1 <= n2)
	{
		if (n1 % m == 0 && n1 % n != 0)
		{
			cout << n1 << "\n";
		}
		n1++;
	}

	system("pause");
	return 0;
}
