#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    printf("\n\t* Enter The Source string : ");
    gets(str1);
    printf("\n\t* Enter The Destination string : ");
    gets(str2);
    for (int i = 0; i < strlen(str1); i++)
    {
        str2[i] = str1[i];
    }
    printf("\n\t* Destination(after copy) string : %s",str2);
return 0;
}