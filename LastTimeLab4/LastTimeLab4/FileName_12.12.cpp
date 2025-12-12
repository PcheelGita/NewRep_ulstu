#include <stdio.h>

int main() {
    int number;

    printf("введите целое число: ");
    scanf_s("%d", &number);

    printf("остаток от деления на 3: %d\n", number % 3);

    return 0;
}