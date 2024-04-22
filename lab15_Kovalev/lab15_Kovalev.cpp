#include <iostream>
#include "Header.h"
using namespace std;
int main()
{
    int a[20], n = 0, k = 0;
    for (int i = 0; i < 20; i++)
    { 
        a[i] = rand() % 25 ;
        if (a[i] >= 10 && a[i] < 100)
        {
            n++;
        }
    }
    int* b = new int[n];
    for (int i = 0; i < 20; i++)
    {
        if (a[i] >= 10 && a[i] < 100)
        {
            b[k] = a[i];
            k++;
        }
    }
    cout << "First array\n";
    for (int i = 0; i < 20; i++)
    {
        cout << a[i] << '\t';
    }
    cout << endl << "XX array\n";
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << '\t';
    }
    cout << endl << "Sorter array\n";
    Sort1(b, n);
    Sort2(b, n);
}
