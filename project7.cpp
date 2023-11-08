// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//задача 7

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"

int _tmain(int argc, _TCHAR* argv[])
{
	int a[10];

	int size = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < size; i++)
	{
		a[i] = rand()%(100-10+1)+10;
	}
	int shift = a[3];

	for (int i = 0; i < size; i++)
	{

		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				int s = a[j];
				a[j] = a[j + 1];
				a[j + 1] = s;
			}
		}
	}
	for (int i = 0; i < size; i++)
	{
		printf("=%d\n", a[i]);
	}
	for (int i = 0; i < size / 2; i++)
	{

		int f = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = f;

	}
		for (int i = 0; i < size; i++)
		{
			printf("result=%d\n", a[i]);
		}

	return 0;
}