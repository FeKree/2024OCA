#include <iostream>
#include <math.h>
using namespace std;

int res(int mm[])
{
    int res = 0, min;
    for (int n = 0; n < 10; n++)
    {
        if (mm[n] < mm[n - 1])
        {
            min = n;
        }
    }
    for (int n = min + 1; n < 10; n++)
    {
        res += mm[n];
    }

    return res;
}

double res(double mm[])
{
    double res = 0, min ;
    for (int n = 0; n < 10; n++)
    {
        if (mm[n] < mm[n - 1])
        {
            min = n;
        }
    }
    for (int n = min + 1; n < 10; n++)
    {
        res += mm[n];
    }

    return res;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int mm[10];
    double mm1[21];
    for (int i = 0; i < 10; i++)
    {
        cout << "Введите " << i + 1 << " элемент" << endl;
        cin >> mm[i];
    }
    cout << res(mm) << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Введите " << i + 1 << " элемент" << endl;
        cin >> mm1[i];
    }
    cout << res(mm1) <<endl;
    return 0;
}
