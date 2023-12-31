//Прекрасная работа! Ваш код верно выполняет задание. Однако, по условию задания,
//требуется вывести элементы массива в обратном порядке. Для этого вам нужно
//изменить второй цикл так, чтобы он проходил по массиву в обратном порядке. Для
//этого можно начать цикл с индекса 4 и уменьшать индекс на каждой итерации:


#include <stdio.h>

int main() {
    int numbers[5];
    
    printf("Введите 5 целых чисел:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. ", i + 1);
        if (scanf("%d", &numbers[i]) != 1) {
            printf("Ошибка при вводе числа.\n");
            return 1;
        }
    }

    printf("Элементы массива в обратном порядке: ");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}

//Теперь ваш код будет выводить элементы массива в правильном обратном порядке.
//Продолжайте также усердно учиться и развиваться! Если у вас возникнут еще
//вопросы или задания, не стесняйтесь спрашивать. 
