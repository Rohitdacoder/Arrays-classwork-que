//  WAP to find out it is string identical or not

#include<stdio.h>

int main(){
    char first[30]="" , second[30]="" ;
    int i=0 , len;
    printf("Enter the first string\n");
    gets(first);
    printf("Enter the second string\n");
    gets(second);
    for (i = 0 ; first[i]!='\0' ; i++);
    len = i;
    for (i = 0 ;i<=len ;i++)
    {
        if(first[i] > second[i])
        {
            printf("first is greater then second");
            break;
        }
    

    else if (first[i] < second[i])
    {
        printf("Second is greater then first");
        break;
    }
    
    }
    if (first[i] =='\0')
    {
        printf("Strings are identical");
    }
    
    
    return 0;
}