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
        *(pArr + i) = 1 + rand() % *pLim;
        cout << *(pArr + i) << " ";
    }

    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        while (*(pArr + i) > 0)
        {
            sum += *(pArr + i) % 10;
            *(pArr + i) /= 10;
        }
    }

    cout << "\n" << sum;
}