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

    int id = 0 - *pLim;
    for (int i = 0; i < 10; i++)
        if* (pArr + i) < 0)
        {
        id = i;
        break;
        }

    int sum = 0;
    if (id != 0 - *pLim)
    {
        cout << "\nindex = " << id;
        for (int i = id + 1; i < 10; i++)
            sum += abs(*(pArr + i));
        cout << "\nsum = " << sum;
    }
    else
        cout << "no negative";
}