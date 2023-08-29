#include <stdio.h>

int main()
{
	int num, average, i;

	average = 0;
	num = 0;
	i = 0;
	while (num >= 0)
	{
		average += num; 
		printf("Введите число: ");
		if (scanf("%d", &num) != 1)
		{
			printf("Ошибка при вводе числа.\n");
			return 1;
		}
		i++;
	}
	printf("%.2f\n", (float)average / (i - 1));
	return 0;
}
