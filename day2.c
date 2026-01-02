// Reverse of two number
#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 9)
    {
        printf("Enter more than one dighit number \n");
    }

    for (; num != 0; num = num / 10) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
    }

    printf("Reversed number: %d", reverse);

    return 0;
}
