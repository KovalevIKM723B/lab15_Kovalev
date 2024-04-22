#include <iostream>
using namespace std;

void Sort1(int* b, int n)
{
	int temp = 100, number, x;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (b[j] < temp)
			{
				temp = b[j];
				number = j;
			}
		}
		x = b[i];
		b[i] = b[number];
		b[number] = x;
		temp = 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << '\t';
	}
}