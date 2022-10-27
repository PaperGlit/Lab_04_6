﻿// Lab_04_6.cpp
// Лазар Владислав
// Лабораторна робота No 4.6
// Вкладені цикли
// Варіант 11

#include <iostream>

using namespace std;

int main()
{
	double P, S;
	int n, k;

	S = 0;
	n = 1;

	while (n <= 25)
	{
		P = 1;
		k = 1;

		while (k <= n)
		{
			P *= sqrt(cos(k + n) * cos(k + n));
			k++;
		}

		S += cos(n) + P;
		n++;
	};

	cout << S << endl;

	S = 0;
	n = 1;

	do
	{
		P = 1;
		k = 1;

		do
		{
			P *= sqrt(cos(k + n) * cos(k + n));
			k++;
		} while (k <= n);

		S += cos(n) + P;
		n++;
	} while (n <= 25);

	cout << S << endl;

	S = 0;

	for (n = 1; n <= 25; n++)
	{
		P = 1;

		for (k = 1; k <= n; k++)
		{
			P *= sqrt(cos(k + n) * cos(k + n));
		}

		S += cos(n) + P;
	}

	cout << S << endl;

	S = 0;

	for (n = 25; n >= 1; n--)
	{
		P = 1;

		for (k = n; k >= 1; k--)
		{
			P *= sqrt(cos(k + n) * cos(k + n));
		}

		S += cos(n) + P;
	}

	cout << S << endl;

	return 0;
}