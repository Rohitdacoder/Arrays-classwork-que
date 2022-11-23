// Inverse of string

#include<stdio.h>
#include<string.h>

int main(){
    char first[30] = "" , second[30] = "";
    int i = 0 , len;
    printf("Enter the first String\n");
    gets(first);
    for (i=0 ; first[i]!= '\0' ; i++);
    len = i;
    for (i = 0 ; i <= len ; i++)
    {
        second[i] = first[len-i-1];
    }
    second[i] = '\0';

    printf("Concatenation of both string is %s" , second);
    
    return 0;
}