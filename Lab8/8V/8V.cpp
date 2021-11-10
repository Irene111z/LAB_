//Найти сумму цифр в введенном с экрана числе, их количество и напечатать число наоборот.
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
    int a;//введенное число
    int const N = 100;int Arr[N];
    int i, k, sum;
    i = k = sum = 0;
	cout << "Введите число: ";
	cin >> a;
  
    while(a>0)//заполнение массива цифрами числа в обратном порядке
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
    cout << "Число, записанное в обратном порядке : " ;
    for (i = 0; i < k; i++) 
    {
        cout << Arr[i];
    }