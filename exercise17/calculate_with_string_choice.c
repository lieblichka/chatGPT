#include <stdio.h>

int main()
{
	char	op;
	float	n1, n2, result;

	printf("Введите опаратор (+, -, *, /): ");
	if (scanf(" %c", &op) != 1)
	{
		printf("Ошибка при выборе оператора.\n");
		return 1;
	}
	printf("Введите первое число: ");
	if (scanf("%f", &n1) != 1)
	{
		printf("Ошибка при вводе первого числа.\n");
		return 1;
	}
	printf("Введите второе число: ");	
	if (scanf("%f", &n2) != 1)
	{
		printf("Ошибка при вводе второго числа.\n");
		return 1;
	}
	switch (op)
	{
		case '+':
			result = n1 + n2;
			break;
		case '-':
			result = n1 - n2;
			break;
		case '*':
			result = n1 * n2;
			break;
		case '/':
			if (n2 != 0)
				result = n1 / n2;
			else
			{
				printf("Ошибка: деление на ноль\n");
				return 1;
			}
			break;
		default:
			printf("Ошибка: неверно выбран оператор\n");
			return 1;
	}

	printf("Результат: %.2f\n", result);

	return 0;
}
