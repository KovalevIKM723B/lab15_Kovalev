#include <iostream>
using namespace std;

void Sort2(int* b, int n) 
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (b[i] > b[i + 1])
            {
                temp = b[i];
                b[i] = b[i + 1];
                b[i + 1] = temp;
            }
        }
    }
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << b[i] << '\t';
	}
}