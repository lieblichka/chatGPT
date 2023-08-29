//Конечно, вот пример использования оператора  switch для реализации калькулятора: 


#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    printf("Выберите операцию:\n");
    printf("1. Сложение\n");
    printf("2. Вычитание\n");
    printf("3. Умножение\n");
    printf("4. Деление\n");
    printf("Введите номер операции: ");
    scanf("%d", &choice);

    printf("Введите первое число: ");
    scanf("%f", &num1);

    printf("Введите второе число: ");
    scanf("%f", &num2);

    switch (choice) {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Ошибка: деление на ноль\n");
                return 1;
            }
            break;
        default:
            printf("Ошибка: неверный номер операции\n");
            return 1;
    }

    printf("Результат: %.2f\n", result);

    return 0;
}

/*
В этом коде мы используем оператор  switch для определения выбранной операции (
choice). В каждом блоке  case выполняется соответствующая арифметическая
операция в зависимости от выбор 
*/

/*
Обратите внимание на использование  break после каждого блока  case, чтобы
остановить выполнение оператора  switch, когда операция выполнена. Также
обратите внимание на проверку деления на ноль в случае выбора операции деления. 
*/
