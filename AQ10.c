// WAP add arr1 and arr2 and combine it or add it 



#include<stdio.h>
#define SIZE 5

int main(){
    int arr1[SIZE],arr2[SIZE],arr3[2*SIZE],i;
    printf("Enter %d Numbers in the array 1\n" , SIZE);
    for (i=0;  i<= SIZE - 1 ; i++)
    {
        scanf("%d" , &arr1[i]);
    }

   
    printf("Enter %d Numbers in the array 2\n" , SIZE);
    for (i=0;  i<= SIZE - 1 ; i++)
    {
        scanf("%d" , &arr2[i]);
    }

    for (i = 0 ; i <= SIZE - 1 ; i++)
    {
        arr3[i] = arr1[i];
        arr3[SIZE+i] = arr2[i];
       
    }
    for (i=0 ; i<2*SIZE ; i++)
    {
        printf("%d\n" , arr3[i]);
    }
    
    return 0;
}