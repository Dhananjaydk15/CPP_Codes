#include<stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    int j = 0;
    printf("\n\t* Enter The first string : ");
    gets(str1);
    printf("\n\t* Enter The Second string : ");
    gets(str2);
    for (int i = strlen(str1); i < (strlen(str1)+strlen(str2)); i++)
    {
        str1[i] = str2[j++];
    }
    printf("\n\t* Concatenated string : %s",str1);
return 0;
}