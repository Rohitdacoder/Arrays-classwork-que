// codes of string copy

#include<stdio.h>
#include<string.h>

int main(){
    char first[30] = "" , second[30]="";
    int i=0;
    printf("Enter First string\n");
    gets(first);
    for (i=0 ; first[i]!= '\0' ; i++)
    {
        second[i] = first[i];
    }
    second[i] = '\0';
    printf("Second string is %s" , second);
    return 0;
}