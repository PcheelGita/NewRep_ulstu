#include <stdio.h>
//im very vry tired
int main() {
    int number;

    printf("Введите целое число: ");
    scanf_s("%d", &number);

    printf("Остаток от деления на 3: %d\n", number % 3);

    return 0;
}