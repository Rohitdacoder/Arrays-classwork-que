// Concatenation of string

#include<stdio.h>
#include<string.h>

/*   int main(){
    char first[30] = "" , second[30]="";
    int i=0;
    printf("Enter First string\n");
    gets(first);
    printf("Second string is\n");
    gets(second);
    strcat(first , second);

    printf("Concatenation of string is %s" , first);
    return 0;

}*/

//code of concatenation
#include<stdio.h>
#include<string.h>
int main(){
    char first[30] = "" , second[30]="" , third[60]="";
    int i=0 , j=0 , len;
    printf("Enter First string\n");
    gets(first);
    printf("Enter Second string \n");
    gets(second);
    for (i=0 ; first[i]!='\0' ; i++);{
        third[i] = first[i];
    }
    len = i;
    for (j = 0; second[j]!= '\0' ; j++ ,i++)
    {
        
        third[len+j] = second[j];
        //first[i] = second[j];
    }
    
    third[i]= '\0';
    //first[i] = '\0';
    printf("Concatenation of both string is %s" , third);
    return 0;
}
