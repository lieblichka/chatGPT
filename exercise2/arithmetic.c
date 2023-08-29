#include <stdio.h>

int main() 
{
	int n1,n2;

	printf("Введите первое число: ");
	scanf("%d", &n1);

	printf("Введите второе число: ");
	scanf("%d", &n2);

	printf("Сумма: %d\n", n1 + n2);
	printf("Разность: %d\n", n1 - n2);
	printf("Произведение: %d\n", n1 * n2);
	printf("Частное: %d\n", n1 / n2);
}
