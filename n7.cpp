#include <iostream>
using namespace std;

int main()
{
    int a[10], lim;
    int* pArr = a;

    cout << "enter num limit \n";
    cin >> lim;
    int* pLim = &lim;

    srand(time(0));

    for (int i = 0; i < 10; i++)
    {
        *(pArr + i) = rand() % *pLim - (*pLim / 2);
        cout << *(pArr + i) << " ";
    }

    int min = 0;
    for (int i = 0; i < 10; i++)
        if (abs(*(pArr + i)) < abs(*(pArr + min)))
            min = i;

    cout << "\n" << min;
}