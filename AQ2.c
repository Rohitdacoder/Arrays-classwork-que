#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i;
    printf("Enter 10 numbers \n");

    for (i=0;i<= SIZE-1;i++)
    {
        scanf("%d" , &arr[i]);
    }
    for (i=0;i<=SIZE-1;i++)
    {
        printf("%d\n" , arr[i]);
    }
    
    
    return 0;
}