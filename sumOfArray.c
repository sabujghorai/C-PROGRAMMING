#include<stdio.h>
    int main(){
    int arr[5] = {2,3,4,5,12};
    int sum =0;
    for(int i=0 ; i<=4; i++){
        sum = sum + arr[i];
    }
    printf("sum is : %d",sum);
return 0;
}