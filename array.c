// #include<stdio.h>
//     int main(){
//         int arr[5] = {10,20,30,40,50};
//         printf("The array elements are : ");

//         for(int i=0; i <= 4;i++){
//             printf(" %d",arr[i]);
//         }

// return 0;
// }

// #include<stdio.h>
//     int main(){
//     int arr[5];

//     for(int i=0;i<5;i++){
//         printf("Enter the elements :");
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements are : ");
//     for(int i=0; i<5;i++){
//         printf(" %d",arr[i]);
//     }
// return 0;
// }

// Take input from user and print them in reverse order
// #include<stdio.h>
//     int main(){
//     int arr[5];

//     for(int i=0; i<5; i++){
//         printf("Enter the elements : ");
//         scanf("%d",&arr[i]);
//     }
//     printf("The elements are : ");
//     for(int i=4; i>=0;i--){
//         printf("%d ",arr[i]);
//     }
// return 0;
// }


// // Given an array of marks of 5 students if the marks of any student is less then 35 then print their roll number 
// // [Roll number refers to the index of the array]

// #include<stdio.h>
//     int main(){
//     int marks[5];
//     for(int i=0;i<=4;i++){
//         printf("Enter the marks of the students :");
//         scanf("%d",&marks[i]);
//     }
//     printf("Roll number of failed students are : ");
//     for(int i=0; i<=4;i++){
//         if(marks[i]<35){
//              printf(" %d",i);
//         }
//     }  
// return 0;
// }

// // Calculate the product of all the elements in given array

// #include<stdio.h>
//     int main(){
//     int arr_product[5] = {1,2,3,4,5};
//     int product = 1;
//     for(int i=0;i<=4;i++){
//         product = product*arr_product[i];
//     }
//     printf("The product of all the elements is : %d ",product);
// return 0;
// }


// Find the maximum value out of all the elements in array

// #include<stdio.h>
// #include<limits.h>
//     int main(){
//     int max_value[6] ={3,4,5,6,7,9};
//     // int max = -1; sabse chota number
//     int max = INT_MIN; // -2147483648%  this is the minimum valus for int datatype
//     // int max = max_value[0];
//     for(int i=0;i<=5;i++){
//         if(max<max_value[i]){
//             max = max_value[i];
//         }
//     }
//     printf("The maximum value is : %d",max);

// return 0;
// }


// Given an array og integers, change the value
//  of all odd indexed elements to it's second multople and increment all even indexed value by 10

#include<stdio.h>
    int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(i%2 != 0){
            arr[i] = arr[i]*2;
        }
        else{
            arr[i]+=10;
        }
    }
    for(int i=0;i<=6;i++){
    printf("%d ",arr[i]);
    }
return 0;
}