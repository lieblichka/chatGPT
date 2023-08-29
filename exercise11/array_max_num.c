// Требуется модификация, обращение к элементу
// массива через амперсан scanf("%d", &(numbers + i)) ... примерно 
#include <stdio.h>

int main()
{
	int numbers[10];
	int max;
	
	printf("Введите 10 целых чисел:\n");
	for (int i = 0; i < 10; i++)
	{
		int num;
		printf("%d. ", i + 1);
		if (scanf("%d", &numbers[i]) != 1)
		{
			printf("Ошибка при вводе числа.\n");
			return 1;
		}
	}
	max = numbers[0];
	for (int i = 0; i < 10; i++)
		max = numbers[i] > max ? numbers[i] : max;
	
	printf("Максимальное значение: %d\n", max);
	return 0;
}
