//WAP to find greatest in element 

#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i,g=0;
    printf("Enter 10 element in array \n");

    for (i=0;i<=SIZE-1;i++)
    {
        scanf("%d" , &arr[i]);
        if (g<arr[i])
        {
            g=arr[i];
        }
        
    }
    printf("Greatest among 10 element is %d" , g);
    
    
    return 0;
}