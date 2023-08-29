#include <stdio.h>

int main() {

    int num, max;
   
   	max = 0; 
    printf("Введите первое число: ");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка при вводе первого числа.\n");
        return 1;
    }
	if (num > max)
		max = num;

    printf("Введите второе число: ");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка при вводе второго числа.\n");
        return 1;
    
	}
	if (num > max)
		max = num;

    printf("Введите третье число: ");
    if (scanf("%d", &num) != 1) {
        printf("Ошибка при вводе третьего числа.\n");
        return 1;
    }
	if (num > max)
		max = num;
   	printf("Максимальное число: %d", max);

    
    return 0;
}

