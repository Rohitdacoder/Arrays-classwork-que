// string copy programms;

#include<stdio.h>
#include<string.h>

int main(){
    char first[30] = "" , second[30]="";
    int i=0;
    printf("Enter First string\n");
    gets(first);
    strcpy(second , first);
    printf("Second string is %s" , second);

    return 0;
}