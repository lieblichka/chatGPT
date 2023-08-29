#include <stdio.h>

int main()
{
	int numbers[5];
	
	printf("Введите 5 целых чисел:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d. ", i + 1);
		if (scanf("%d", &numbers[i]) != 1)
		{
			printf ("Ошибка при вводе числа.\n");
			return 1;
		}
	}

	printf("Элементы массива в обратном порядке: ");
	for (int i = 4; i >= 0; i--)
		printf("%d ", numbers[i]);

	return 0;
}
