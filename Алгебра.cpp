#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	float a[50][50];

	cout << "Введите размер матрицы: " << endl;
	cin >> n;
	cout << "Введите элементы матрицы:" << endl;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> a[i][j];

	for (int i = 1; i < n; ++i)
		for (int k = i; k < n; ++k)
			for (int j = n - 1; j >= 0; --j)
				if (a[k][i - 1] != 0 && a[i - 1][i - 1] != 0 && a[i - 1][j] != 0)
					a[k][j] -=((a[k][i - 1] / a[i - 1][i - 1]) * a[i - 1][j]);

	cout << "Верхне-треугольный вид матрицы:" << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
}
