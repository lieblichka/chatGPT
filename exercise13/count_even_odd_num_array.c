#include <stdio.h>

int main()
{
	int numbers[10];
	int even_num, odd_num;

	// Заполнение массива числами
	printf("Введите 10 целых чисел: \n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d. ", i + 1);
		if (scanf("%d", &numbers[i]) != 1)
		{
			printf("Ошибка при вводе числа.\n");
			return 1;
		}
	}

	// Подсчет четных и нечетных чисел
	even_num = 0;
	odd_num = 0;
	for (int i = 0; i < 10; i++)
	{
		if (numbers[i] % 2 == 0)
			even_num += 1;
		else 
			odd_num += 1;
	}
	printf("Четные числа: %d\n", even_num);
	printf("Нечетные числа: %d\n", odd_num);
	return 0;
}
