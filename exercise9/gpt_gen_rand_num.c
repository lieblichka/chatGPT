#include <stdio.h>
#include <stdlib.h>
#include <time.h> // for declaration time function 

int main()
{
	int min, max;

	printf("Введите минимальное значение: ");
	if (scanf("%d", &min) != 1)
	{
		printf("Ошибка при вводе числа. ");
		return 1;
	}
	printf("Введите максимальное значение: ");
	if (scanf("%d", &max) != 1)
	{
		printf("Ошибка при вводе числа. ");
		return 1;
	}

	srand(time(NULL)); // Инициализация генератора случайных чисел 

	printf("Случайные числа: ");
	for (int i = 0; i < 10; i++)
	{
		int randomNumber = min + rand() % (max - min + 1);
		printf("%d ", randomNumber);
	}

	return 0;
}
