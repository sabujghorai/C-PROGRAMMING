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


// Given an array of marks of 5 students if the marks of any student is less then 35 then print their roll number 
// [Roll number refers to the index of the array]

#include<stdio.h>
    int main(){
    int marks[5];
    
    for(int i=0;i<=4;i++){
        printf("Enter the marks of the students :");
        scanf("%d",&marks[i]);
    }
    printf("Roll number of failed students are : ");
    for(int i=0; i<=4;i++){
        if(marks[i]<35){
             printf(" %d",i);
        }
    }  
return 0;
}