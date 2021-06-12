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
        *(pArr + i) = 1 + rand() % *pLim;
        cout << *(pArr + i) << " ";
    }

    int sum = 0;
    for (int i = 0; i < 10; ++i)
        sum += *(pArr + i);

    float aver;
    float* pAver = &aver;

    *pAver = float(sum) / 10;
    cout << "\n\naverage: " << *pAver << "\n\n";

    for (int i = 0; i < 10; ++i)
        if (*(pArr + i) < *pAver)
            cout << *(pArr + i) << " ";
}