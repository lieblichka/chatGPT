#include <stdio.h>

int main()
{
	int num, factorial;

	printf("Введите число: ");
	if (scanf("%d", &num) != 1)
	{
		printf("Ошибка при вводе числа.\n");
		return 1;
	}
	if (num < 0)
		printf("Невозможно вычислить факториал отрицательного числа.\n");
	else 
	{
		factorial = 1;
		for (int i = 1; i <= num; i++)
			factorial *= i;
	}
	printf("Факториал числа %d равен %d.\n", num, factorial);
			
	return 0;
}
