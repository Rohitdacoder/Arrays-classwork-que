//WAP ON BUBBLE SHORT PROBLEMS

#include<stdio.h>
#define SIZE 10


int main(){
    int arr[SIZE],i,j,temp;
    printf("Enter %d Values\n" , SIZE);
    for (i = 0 ; i <= SIZE - 1; i++)
    {
        scanf("%d" , &arr[i]);
    }
    for (i=0 ; i<SIZE - 1; i++)
    {
        for (j = i + 1 ; j <=SIZE - 1; j++ )
        {
            if (arr[i] > arr[j])
            {
              temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;     
            }
            
        }
        
    }
    for(i=0;i<=SIZE-1;i++){
        printf("%d\n" , arr[SIZE]);
    }
    
     
    return 0;
}