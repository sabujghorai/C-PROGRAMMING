// Take 5 input from user and print them in reverse....

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


/*  Given an array of marks of students. if the mark of student is less than 35
print it's roll number [Roll numbers here refers to the index of the array ]   */  

#include<stdio.h>
    int main(){
    int marks[10] = {95,90,31,25,100,50,65,89,97,30};

    for(int i=1; i<10 ;i++){
        if (marks[i]<35)
        {printf(" Roll number is : %d \n",i);
        }
    }
return 0;
}