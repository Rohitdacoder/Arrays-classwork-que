// WAP to count total number of even and odd element in an array with there sum too ?

#include<stdio.h>
#define SIZE 5

int main(){
    int arr[SIZE]={0},i,evencount=0 , oddcount=0;
    printf("Enter the 5 element in array\n");
    for (i=0;i<SIZE;i++)
    {
        scanf("%d" , &arr[i]);
        if (arr[i]%2==0)
        {
            evencount+=arr[i];
        }
        else{
        oddcount+=arr[i];
        }
    }

    printf("Total no of even values is %d\n" , evencount);
    printf("Total no of odd values is %d" , oddcount);
    return 0;
}
