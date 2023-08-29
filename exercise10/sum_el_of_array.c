#include <stdio.h>

int main()
{
	int numbers[5], sum = 0;;

	printf("Введите пять целых чисел:\n");	
	for (int i = 0; i < 5; i++)
	{
		int num;
		
		printf("%d. ", i + 1);
		if (scanf("%d", &num) != 1)
		{
			printf("Ошибка при вводе числа.\n ");
			return 1;
		}
		numbers[i] = num;
	}
	for (int i = 0; i < 6; i++)
		sum += numbers[i];
	
	printf("Сумма элементов массива: %d\n", sum);
	
	return 0;
}
