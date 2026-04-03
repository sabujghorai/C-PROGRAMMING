// #include<stdio.h>
//     int main(){
//         int arr[5] = {10,20,30,40,50};
//         printf("The array elements are : ");

//         for(int i=0; i <= 4;i++){
//             printf(" %d",arr[i]);
//         }

// return 0;
// }

#include<stdio.h>
    int main(){
    int arr[10];

    for(int i=0;i<10;i++){
        printf("Enter the elements :");
        scanf("%d",&arr[i]);
    }
    printf("The elements are : ");
   for(int i=0; i<10;i++){
    printf(" %d",arr[i]);
   }
return 0;
}