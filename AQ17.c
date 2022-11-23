// WAP add the row element and output is as a sum

#include<stdio.h>
#include <conio.h>



int main(){    
    int arr[3][3]= {0} , i , j , sum[3] = {0}; 
     
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
            sum[i] += arr[i][j];
        }
        printf("sum of %d row is %d\n", i , sum[i]);
    }
      
     
    return 0;
}