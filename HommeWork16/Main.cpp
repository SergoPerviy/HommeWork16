#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	int n{};

	/*
	Задача 1.
	В одномерном массиве размером в 10 элементов найдите среднее арифметическое. Также посчитайте
	кол-во элементов, значение которых меньше найденного среднего арифметического
	*/

	const int size1 = 10;
	int arr1[size1];
	int sum{};
	int counter{};
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
			arr1[i] = rand() % 100;
			sum += arr1[i];
	}
	double mean = (double)sum / size1;
	for (int i = 0; i < size1; i++) {
		if (arr1[i] < mean) {
			counter++;
		}
	}

	/*
	Задача 2.
	Даны два двумерных массива размерами 5 на 5 элементов. Требуется сложить их между собой. Выведите в консоль
	результаты попарного сложения элементов обоих массивов, которые располагаются в одинаковых координатах.
	*/

	const int size2 = 5;
	int mx1[size2][size2];
	int mx2[size2][size2];
	int mx3[size2][size2];
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			mx1[i][j] = rand() % 100;
			mx2[i][j] = rand() % 100;
		}
	}

	std::cout << "Задача 2.\nРезультат сложения двумерных массивов:\n\n";
	for (int i = 0; i < size2; i++) {
		for (int j = 0; j < size2; j++) {
			mx3[i][j] = mx1[i][j]+mx2[i][j];
			std::cout << mx3[i][j] << '\t';
		}
		std::cout << "\n";
	}

	/*
	Задача 3.
	Пользователь вводит шестизначное число. Если число введено неверно, программа завершает свою работу.
	Иначе, программа в цикле помещает все его цифры в одномерный массив размером в 6 элементов и выводит его на экран.
	*/

	std::cout << "\nЗадача 3.\nВведите шестизначное число -> ";
	const int size3 = 6;
	int arr2[size3];
	std::cin >> n;
	if (n > 999999 || n < 99999) {
		return(1);
	}
	else
	for (int i = size3-1; i >=0; i--) {
		arr2[i] = n  % 10;
		n/=10;
	}
	std::cout << "{ ";
	for (int i = 0; i < size3; i++)
		std::cout << arr2[i] << ", ";
	std::cout << "\b\b }\n";
	
	return 0;
}