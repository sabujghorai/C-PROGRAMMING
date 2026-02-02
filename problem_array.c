// // Take 5 input from user and print them in reverse....

// #include<stdio.h>
//     int main(){
//     int arr[5];

//     for(int i = 0; i<5; i++){
//         printf("Enter element no %d :",i+1);
//         scanf("%d",&arr[i]);
//     }

//     for(int j=4 ; j>=0 ; j--){
//         printf("%d \n",arr[j]);
//     }
// return 0;
// }

// Read n elements and print them
#include <stdio.h>

int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
