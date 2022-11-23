// WAP to find a sum of even and odd postion 

#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i,evencount=0 , oddcount=0;
    printf("Enter the 5 element in array\n");
    for (i=0;i<SIZE;i++)
    {
        scanf("%d" , &arr[i]);
        if (i%2==0)
        {
            evencount+=arr[i];
        }
        else{
        oddcount+=arr[i];
        }
    }

    printf("Sum of even postion values is %d\n" , evencount);
    printf("Sum of odd postion values is %d" , oddcount);
    return 0;
}