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

// // Read n elements and print them
// #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter size: ");
//     scanf("%d", &n);

//     int a[n];

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

// // Calculate the sum of all elements
// #include <stdio.h>

// int main() {
//     int a[5], sum = 0;

//     for(int i = 0; i < 5; i++) {
//         scanf("%d", &a[i]);
//         sum += a[i];
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }

// // Find the largest and smallest elements
// #include <stdio.h>

// int main() {
//     int a[5] = {12, 4, 8, 20, 3};
//     int max = a[0], min = a[0];

//     for(int i = 1; i < 5; i++) {
//         if(a[i] > max) max = a[i];
//         if(a[i] < min) min = a[i];
//     }

//     printf("Max = %d\nMin = %d", max, min);
//     return 0;
// }
