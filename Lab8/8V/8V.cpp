//Найти сумму цифр в введенном с экрана числе, их количество и напечатать число наоборот.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int a;//введенное число
    int const N = 100; int Arr[N];
    int i, k, sum, d, w;
    i = k = sum = 0;
    cout << "Введите число( max = 2 billions ): ";
    cin >> a;

    while (a > 0)//заполнение массива цифрами числа в обратном порядке
    {
        Arr[i] = a % 10;
        a /= 10;
        k++;//количество цифр
        i++;
    }
    for (i = 0; i < k; i++)
        sum = sum + Arr[i];//сумма цифр
    cout << "Сумма цифр числа : " << sum << endl;
    cout << "Количество цифр в числе : " << k << endl;
    cout << "Число, записанное в обратном порядке : ";
  
    d = 10; int x = 0; int re = 0;
    i = 0; int h = 0;
    do
    {
        w = pow(d, k-1);
        re = Arr[i] * w;
        h += re;
        i++;
        k--;

    } while (k > 0);
    cout << h;
}