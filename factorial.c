#include<stdio.h>
int main(){
  int a ;
  printf("Enter a number :");
  scanf("%d",&a);
  int fact = 1;
  for(int i=1;i<=a;i++){
    fact = fact*i;
  }
  printf("factorial of your number is = %d",fact);
  return 0;
}
