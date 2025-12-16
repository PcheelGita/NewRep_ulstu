#include <stdio.h>

int main() {
    int number;

    printf("Ââåäèòå öåëîå ÷èñëî: ");
    scanf_s("%d", &number);

    printf("Îñòàòîê îò äåëåíèÿ íà 3: %d\n", number % 3);

    return 0;
}

