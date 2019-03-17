#include <iostream>
#include <clocale>
#include <time.h>
using namespace std;

void randomize_array(int **a, int h, int w)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
			a[y][x] = rand() % 100;
	}
}

void print_arrey(int **a, int h, int w)
{
	for (int y = 0; y < h; y++)
	{
		for (int x = 0; x < w; x++)
		{
			cout.width(3);
			cout << a[y][x];
		}
		cout << endl;
	}
	cout << endl << endl;
}
//Создаем новый масив
void criet_array(int **&a, int h, int w)
{
	a = new int*[h];
	for (int y = 0; y < h; y++)
		a[y] = new int[w];
}
//Удаление массива
void destroy_array(int **&a, int h, int w)
{
	for (int y = 0; y < h; y++)
		delete[]a[y];  //udalyaem stroki
	a = nullptr;  //obnulyaem ukazatel
}
//1.    Написать функцию, вставляющую строку в указанную позицию двумерного массива.
template<typename T>
void add_row_end(T **&a, int &h, int   stroka, int w, const T *row)
{
	T**temp = new T*[h + 1];
	for (int i = 0; i < stroka; i++)

		if (temp[stroka] != a[i])
			temp[i] = a[i];
		else
			temp[stroka] = a[i];

	for (int i = stroka; i < h; i++)
		temp[stroka + 1] = a[i];

	temp[h] = new T[w];
	for (int i = 0; i < w; i++)
		temp[stroka][i] = row[i];


	delete[]a;
	a = temp;
	h++;
}
int main()
{
	//Вывод на экран дв. массива
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	//1
	/*int h = 5, w = 5;
	int **a;
	int s[] = { 1, 1, 1, 1, 5 };  //новая строка


	criet_array(a, h, w);
	randomize_array(a, h, w);
	print_arrey(a, h, w);


	//1.    Написать функцию, вставляющую строку в указанную позицию двумерного массива.
	int stroka;
	cin >> stroka;
	add_row_end(a, h, stroka, w, s);  //замена этой строки
	print_arrey(a, h, w);

	destroy_array(a, h, w);*/


	system("pause");
	return 0;
}