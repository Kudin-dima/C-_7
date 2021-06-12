#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int a[10], lim;
    int* pArr = a;

    cout << "enter num limit \n";
    cin >> lim;

    int* pLim = &lim;

    for (int i = 0; i < 10; i++)
    {
        *(pArr + i) = rand() % *pLim - (*pLim / 2);
        cout << *(pArr + i) << " ";
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
        if (*(pArr + i) > 0 && *(pArr + i) % 2 == 0)
            sum += *(pArr + i);

    cout << "\n\n" << sum;
}