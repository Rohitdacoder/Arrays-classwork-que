// Check the memory is contigious or not 

#include<stdio.h>
#define SIZE 5

int main(){
    long arr[SIZE]={0},i;

    for (i=0;i<= SIZE-1;i++)
    {
        printf("\n address of %d number elements is %d" , i , &arr[i]);
    }
    
    return 0;
}