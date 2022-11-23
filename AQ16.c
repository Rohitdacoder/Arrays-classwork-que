// WAP input element in arry 

#include<stdio.h>
#include <conio.h>



int main(){    
    int arr[3][3]= {0} , j , i;
     
     printf("Enter the 3*3 matrix Values\n");
     for(i=0; i <= 2 ;i++)
     {
        for (j=0 ; j <= 2 ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
         
     }
    for (i=0 ; i<=2; i++)
    {
        for (j =0 ; j <=2; j++ )
        {
            printf("%d" , arr[i][j]); 
        }
        printf("\n");
    }
      
     
    return 0;
}