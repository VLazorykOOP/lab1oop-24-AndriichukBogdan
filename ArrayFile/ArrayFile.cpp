 // ArrayFile.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//Тестовий коміт перепрошую hjh
#include <iostream>
#include <fstream>
#include <ios>
#include <vector>

#include <time.h>

using namespace std;

auto FirstTask()
{
	int size;
	float* A;
	float* B;;

	cout << "Print size of Array:";
	cin >> size;
	A = new float[size];
	B = new float[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter Array[" << i << "]";
		cin >> A[i];
	}
	int j = 0;
	for (int i = 0; i < size; i++) {
		if (A[i] > 0) {
			B[j] = A[i];
			j++;
		}
	}

	cout << "Sorted B:" << endl;
	for (int i = 0; i < j; i++) {
		cout << "B[" << i << "]=" << B[i] << endl;
	}
	delete [] A;
	

}
auto SecondTask()
{
	int i, j, T;
	int size, max;
	int* A;

	cout << "Print size of Array:";
	cin >> size;

	A = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter Array[" << i << "]";
		cin >> A[i];
	}
	cout << "Enter T:" << endl;
	cin >> T;

	for (i = 0; i < size; i++) {
		if (A[i] > T) {
			max = A[i + 1];
			for (j = i + 1; j < size; j++) {
				if (A[j] > max)max = A[j];
			}
			break;
		}
	}
	cout << "Max element is:" << max << endl;
}

auto ThirdTask()
{
	int size, a, b;
	int* X;
	int sum = 0, dub = 1;
	int min, max;
	cout << "Print size of Array:";
	cin >> size;

	X = new int[size];

	for (int i = 0; i < size; i++) {
		cout << "Enter Array[" << i << "]";
		cin >> X[i];
	}
	cout << "Enter a:";
	cin >> a;
	cout << "Enter b:";
	cin >> b;

	min = X[0];
	max = X[0];

	for (int i = 0; i < size; i++) {
		if (X[i] < a) sum += X[i];
		if (X[i] > b) dub *= X[i];
		if (X[i] < min) min = X[i];
		if (X[i] > max) max = X[i];
	}
	cout << "Summa:" << sum << endl;
	cout << "Doub:" << dub << endl;
	cout << "Max:" << max << endl;
	cout << "Min:" << min << endl;

}

int main()
{
	int x;
	cout << "Choose Task!" << endl;
	cout << "1.FirstTask" << "\n";
	cout << "2.SecondTask!" << "\n";
	cout << "3.Third Task!" << "\n";
	cout << "4.Exit!" << "\n";

	cin >> x;

	switch (x) {
	case 1:
		FirstTask();
		break;

	case 2:
		SecondTask();
		break;
	case 3:
		ThirdTask();
		break;
	case 4:
		cout << "Well goodbye!" << endl;
		break;

	}

}
