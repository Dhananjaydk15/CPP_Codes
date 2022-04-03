/* Write a C Program to reverse a given word using function. */
#include<stdio.h>
#include<string.h>
int main(){
    char str[20] ;
    int coutu = 0, coutl = 0;
    printf("\t* Enter the string :- ");
    gets(str); // get string :
    printf("\t* The string after reversing :-");
    for (int i = strlen(str)+1; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    
return 0;
}