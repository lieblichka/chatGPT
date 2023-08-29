#include <stdio.h>

int main()
{
	int num;

	printf("Введите положительное  число: ");
	if (scanf("%d", &num) != 1)
	{
		printf("Ошибка при вводе числа.\n");
		return 1;
	}
	if (num < 0)
	{
		printf("Введенно отрицательное число: ");
		return 0;
	}
	printf("Перевернутое число: ");
	if (num == 0)
		printf("0");
	while (num)
	{
		printf("%d", num % 10);
		num /= 10;
	}
	return 0;
}
