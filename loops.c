// #include<stdio.h>
//     int main(){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i);
//     }
// return 0;
//     }

#include<stdio.h>
    int main(){
        int n,sum = 0;
        printf("Enter a number :");
        scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum = sum+i;
    }
    printf("The total sum is : %d\n",sum);
return 0;
}