// WAP on  sum of 2 row

#include<stdio.h>
#include <conio.h>



int main(){    
    int arr[3][3]= {0} , i , j , sum[3] = {0} , arr1[3][3] , arr2[3][3]; 
     
     printf("Enter first 3*3 matrix Values\n");
     for(i=0; i <= 2 ;i++)
     {
        for (j=0 ; j <= 2 ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
        
     }
     printf("Enter second 3*3 matrix Values\n");
     for(i=0; i <= 2 ;i++)
     {
        for (j=0 ; j <= 2 ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
        
     }
     printf("Sum of two 3*3 matrix is\n");
     for (i=0 ; i<=2; i++)
    {
        for (j =0 ; j <=2; j++ )
        {
            arr2[i][j] = arr[i][j] + arr[i][j];
            printf("%d" , arr2[i][j]);
        }
        printf("\n");
    }
      


     return 0; 
    }
