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

// factorial of a number

#include<stdio.h>

int fact(int a){
    if(a == 0) return 1;
    return a * fact (a-1);
}

    int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    int result = fact(a);
    printf("factorial of your number is : %d",result);
return 0;
}
