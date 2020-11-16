// Lab_03_4.cpp
// < Садівського Ростислава >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 21

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i, N;
	double S;	cout << "N = "; cin >> N;	S = 0;
	i = 1;

	while (i <= N)
	{		S += cos(sin(i)) / (1 + (sin(i) * (sin(i))));		i++;	}
	cout << S << endl;
	S = 0;
	i = 1;
	do {
		S += (cos(sin(i))) / (1 + (sin(i) * (sin(i))));		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = 1; i <= N; i++)
	{		S += (cos(sin(i))) / (1 + (sin(i) * (sin(i))));	}	cout << S << endl;
	S = 0;
	for (i = N; i >= 1; i--)
	{		S += (cos(sin(i))) / (1 + (sin(i) * (sin(i))));	}
	cout << S << endl;
	return 0;
}