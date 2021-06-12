#include <iostream>
using namespace std;

int main()
{
    srand(time(0));

    int a[10], lim_1, lim_2;
    int* pArr = a;

    cout << "enter num limits \n";
    cin >> lim_1 >> lim_2;

    int* pLim_1 = &lim_1, * pLim_2 = &lim_2;

    for (int i = 0; i < 10; i++)
    {
        *(pArr + i) = rand() % (*pLim_2 - *pLim_1) + *pLim_1;
        cout << *(pArr + i) << " ";
    }

    int num_elements = 10, i = 0, j;
    int* pNumE = &num_elements;

    cout << "\nenter range for delete\n";
    cin >> *pLim_1 >> *pLim_2;
    while (i < *pNumE)
    {
        if ((pArr[i] <= *pLim_2) && (pArr[i] >= *pLim_1))
        {
            *pNumE -= 1;

            for (j = i; j < *pNumE; j++)
                *(pArr + j) = *(pArr + (j + 1));
        }
        else
            i += 1;
    }

    for (int i = *pNumE; i < 10; i++)
        *(pArr + i) = 0;

    for (int i = 0; i < 10; i++)
        cout << *(pArr + i) << " ";
}