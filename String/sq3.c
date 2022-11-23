// WAP to make every starting word of a sentence into upper case.

#include<stdio.h>
#include<string.h>

int main(){
    char str [30] = "" ;
    int i=0;
    printf("Enter your name\n");
    gets(str);
    for(i=0; str[i]!='\0';i++){
        if (i==0 || str[i-1]==' ')
        {
        if (str[i]>='a' && str[i]<='z')
        {
            str[i] -= 32;
        }
        } else{
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
            
        }
    }
    printf("Name in upper Case is %s" , str);

    return 0;
}


