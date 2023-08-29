#include <stdio.h>

int main()
{
	int numbers[5], average = 0;

	printf("Введите 5 целых чисел: \n");	
	for (int i = 0; i < 5; i++)
	{
		printf("%d. ", i + 1);
		if (scanf("%d", &numbers[i]) != 1)
		{
			printf("Ошибка при вводе числа.\n");
			return 1;
		}
	}
	for (int i = 0; i < 5; i++)
		average += numbers[i]; 
	printf("Среднее арифметическое: %.2f\n", (float)average / 5);
	return 0;
}
