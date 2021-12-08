#include <iomanip>
#include <iostream>
#include <windows.h>
#include <chrono>
using namespace std;

void insertion_sort(int array[], int n);//сортировка вставками
void selection_sort(int array[], int n);//сортировка выбором

void a(int array[], int n);//упорядоченный массив
void b(int array[], int n);//упорядоченный в обратном порядке
void c(int array[], int n);//неупорядоченный массив

void dur_(double duration[], int n, double aver_dur);//сортировка и расчёт среднего значения

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int N = 15;//количество элементов в массиве
	const int M = 500;//количество циклов
	cout << "N = " << N << endl << endl;

	int Array[N], Array2[N]; 
	double dur_arr[M];//массив, заполненный временем
	int i;
	
	//УПОРЯДОЧЕННЫЙ МАССИВ	//УПОРЯДОЧЕННЫЙ МАССИВ	//УПОРЯДОЧЕННЫЙ МАССИВ	//УПОРЯДОЧЕННЫЙ МАССИВ
	a(Array, N);

	cout << "Начальный массив (упорядоченный):" << endl;

	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl;

	//начало сортировки вставками

	double aver_dur = 0;

	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();

		insertion_sort(Array, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}

	cout << "Сортировка вставками:" << endl;
	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl << endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

	//начало сортировки выбором
	a(Array2, N);

	cout << "Начальный массив (упорядоченный):" << endl;

	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl;

	aver_dur = 0;
	for (int i = 0; i < M; i++)
	{
		auto start = std::chrono::high_resolution_clock::now();

		selection_sort(Array2, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}
	
	cout << "Сортировка выбором:" << endl;
	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl<<endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

	//УПОРЯДОЧЕННЫЙ В ОБРАТНОМ ПОРЯДКЕ МАССИВ	//УПОРЯДОЧЕННЫЙ В ОБРАТНОМ ПОРЯДКЕ МАССИВ
	
	//начало сортировки вставками
	b(Array, N);
	cout << "Начальный массив (упорядоченный в обратном порядке):" << endl;
	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl;
	
	aver_dur = 0;
	for (int i = 0; i < M; i++)
	{
		b(Array, N);

		auto start = std::chrono::high_resolution_clock::now();

		insertion_sort(Array, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}

	cout << "Сортировка вставками:" << endl;
	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl << endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

	//начало сортировки выбором

	b(Array2, N);
	cout << "Начальный массив (упорядоченный в обратном порядке):" << endl;
	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl;

	aver_dur = 0;
	for (int i = 0; i < M; i++)
	{
		b(Array2, N);

		auto start = std::chrono::high_resolution_clock::now();

		selection_sort(Array2, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}

	cout << "Сортировка выбором:" << endl;
	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl<<endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

	//НЕУПОРЯДОЧЕННЫЙ МАССИВ	//НЕУПОРЯДОЧЕННЫЙ МАССИВ	//НЕУПОРЯДОЧЕННЫЙ МАССИВ	//НЕУПОРЯДОЧЕННЫЙ МАССИВ
	//начало сортировки вставками 
	c(Array, N);
	for (i = 0; i < N; i++)//копия рандомного массива
		Array2[i] = Array[i];
	
	cout << "Начальный массив (неупорядоченный):" << endl;
	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl;

	aver_dur = 0;
	for (int i = 0; i < M; i++)
	{
		
		c(Array, N);

		auto start = std::chrono::high_resolution_clock::now();

		insertion_sort(Array, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;


		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}
	
	cout << "Сортировка вставками:" << endl;
	for (i = 0; i < N; i++)
		cout << Array[i] << setw(4);
	cout << endl << endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

	//начало сортировки выбором

	cout << "Начальный массив (неупорядоченный):" << endl;
	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl;

	

	aver_dur = 0;
	for (int i = 0; i < M; i++)
	{
		c(Array2, N);

		auto start = std::chrono::high_resolution_clock::now();

		selection_sort(Array2, N);

		auto end = std::chrono::high_resolution_clock::now();
		std::chrono::duration<double> duration = end - start;

		dur_arr[i] = duration.count();//заполнение массива значениями времени

	}
	
	cout << "Сортировка выбором:" << endl;
	for (i = 0; i < N; i++)
		cout << Array2[i] << setw(4);
	cout << endl<<endl;

	dur_(dur_arr, M, aver_dur);//сортировка массива со значениями времени и расчёт среднего значения
	cout << endl;

}
void a(int array[], int n)//упорядоченный массив
{
	int i;
	for (i = 0; i < n; i++)
		array[i] = i + 1;
}
void b(int array[], int n)//упорядоченный в обратном порядке
{
	int i;
	int k = n;
	for (i = 0; i < n; i++,k--)
	{
		array[i] = k;
	}
}
void c(int array[], int n)//неупорядоченный массив
{
	int i;
	for (i = 0; i < n; i++)
		array[i] = i + 1;
	for (int i = 0; i < n; ++i)
	swap(array[i], array[rand() % n]);
}
void insertion_sort(int array[], int n)//сортировка вставками
{
	int temp = 0;
	int i, i1;

	for (i = 1; i < n; i++)
	{
		temp = array[i];// запоминаем элемент
			//начнем перемещение элементов слева от него пока запомненный не окажется меньше ,чем перемещаемый
		for (i1 = i - 1; i1 >= 0 && array[i1] > temp; i1--)
			array[i1 + 1] = array[i1];

		array[i1 + 1] = temp;

	}
}
void selection_sort(int array[], int n)//сортировка выбором
{
	for (int startIndex = 0; startIndex < n - 1; ++startIndex)
	{
		int min = startIndex;

		for (int currentIndex = startIndex + 1; currentIndex < n; ++currentIndex)
		{
			if (array[currentIndex] < array[min])
				min = currentIndex;
		}

		swap(array[startIndex], array[min]);

	}

}
void dur_(double duration[], int n, double aver_dur)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (duration[i] < duration[j])
					swap(duration[i], duration[j]);
	
		}

	}
	for (int i = 0; i < n; i++)
	{
		//cout << "Duration " << i << " = " << duration[i] << "s\n";
		if (i <= 350 & i >= 150)
		aver_dur+= duration[i];
	}
	printf("Среднее значение времени : = %.8lf\n", aver_dur / 200);
	/*cout << "Среднее значение времени : " << aver_dur / 200 << endl;*/
}
