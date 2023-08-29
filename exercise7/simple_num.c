#include <stdio.h>

int main()
{
	int num, del;

	del = 0; // ФЛАГ - число хоть раз делилось без остатка
			 // на число из диапазона цикла	

	printf("Введите число: ");
	if (!scanf("%d", &num))
	{
		printf("Ошибка при вводе числа.\n");
		return 1;
	}
	for (int i = 2; i <= num - 1; i++)
		if (!del && num % i == 0)
			del = 1;
	if (!del || num == 2)
		printf("%d - простое число\n", num); 
	else
		printf("%d - не является простым числом\n", num);
			
	return 0;
}
