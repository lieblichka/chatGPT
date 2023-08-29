//Ваш код работает верно и выполняет поставленную задачу. Однако, вы можете
//немного упростить его, чтобы избежать дублирования кода. Вот более компактная
//версия вашей программы: 
 

#include <stdio.h>

int main() {
    int num, max = 0;
    
    for (int i = 1; i <= 3; i++) {
        printf("Введите число %d: ", i);
        if (scanf("%d", &num) != 1) {
            printf("Ошибка при вводе числа %d.\n", i);
            return 1;
        }
        
        if (num > max)
            max = num;
    }
    
    printf("Максимальное число: %d\n", max);
    
    return 0;
}

/*В этой версии программы мы используем цикл  for для считывания и сравнения трех
чисел. Цикл выполняется три раза, и на каждой итерации мы запрашиваем ввод числа
и сравниваем его с текущим максимальным числом. Таким образом, код стал более
компактным и избегает дублирования.

Обратите внимание, что добавилось использование счетчика  i, который указывает
на порядковый номер вводимого числа. Это позволяет сделать код более обобщенным
и избежать повторения одинакового кода для каждого числа.

Вы можете использовать этот код или оставить ваш вариант, который тоже полностью
верен. */
