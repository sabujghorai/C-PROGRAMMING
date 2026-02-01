// Take 5 input from user and print them in reverse....

#include<stdio.h>
    int main(){
    int arr[5];

    for(int i = 0; i<5; i++){
        printf("Enter element no %d :",i+1);
        scanf("%d",&arr[i]);
    }

    for(int j=4 ; j>=0 ; j--){
        printf("%d \n",arr[j]);
    }
return 0;
}