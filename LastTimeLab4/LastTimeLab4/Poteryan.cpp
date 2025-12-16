#include <stdio.h>

int main() {
    int number;

    printf("Введите целое число: ");
    scanf_s("%d", &number);

    printf("Остаток от деления на 3: %d\n", number % 3);

    return 0;
}
// im very vry tired