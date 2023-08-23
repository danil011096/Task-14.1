#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int quantity = 0;
	int sum = 0;
	std::cout << "\nЗадание 1.\n\n";
	const int siz = 10;
	int array[siz]{};
	for (int i = 0; i < siz; i++)
	{
		array[i] = rand() % 10;
		std::cout << array[i] << " ";
		if (array[i] % 2 == 0)
		{
			sum += array[i];
			quantity++;
		}

	}
	std::cout << std::endl;
	std::cout << "Среднее значение всех четных элементов = " << sum / quantity << ".\n";


	std::cout << "\nЗадание 2.\n\n";
	int x = 70;
	int y = 50;
	const int size = 10;
	int arr[size]{};
	

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % (70 - 50) + 50;
		std::cout << arr[i] << " ";
	}
	std::cout << "\n";

	std::cout << "\nВведи число -> ";
	int N;
	std::cin >> N;
	std::cout << "\n";
	for (int i = 0; i < size; i++)
		if (arr[i] + 4 <= N || arr[i] - 4 >= N)
			std::cout << "";
		else std::cout << arr[i] << " ";
	std::cout << "\n";

	return 0;
}