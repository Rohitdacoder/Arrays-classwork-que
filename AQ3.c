// WAP input 10 number and find out its sum
#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i,sum=0;
    printf("Enter 10 numbers \n");

    for (i=0;i<= SIZE-1;i++)
    {
        scanf("%d" , &arr[i]);
        sum+=arr[i];
    }
    printf("\n Sum of the arr is %d" , sum);
    
    
    return 0;
}