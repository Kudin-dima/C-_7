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

    int max = 0 - *pLim;
    for (int i = 0; i < 10; i++)
        if ((*(pArr + i) % 2 == 0) && (*(pArr + i) > max))
            max = *(pArr + i);
    cout << "\n\n" << max;
}