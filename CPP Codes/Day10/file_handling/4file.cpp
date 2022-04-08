//Write a program in C to copy a file in another name.
#include<stdio.h>
int main(){
        char str[100][100], c;
    FILE *ptr ,*ptr2;
    char f_name1[10],f_name2[10];
    int count = 0, word = 0;
    printf("\n\t* Enter the source file name : ");
    scanf("%s", f_name1);
    printf("\n\t* Enter the new file name : ");
    scanf("%s", f_name2);
    ptr = fopen(f_name1, "r");
    if (ptr == NULL)
        printf("\t* File %s is not open.",f_name1);
    else
        printf("\t* File %s is open.",f_name1);
    ptr2 = fopen(f_name2,"w");
        if (ptr2 == NULL)
        printf("\n\t* File is %s not open.",f_name2);
    else
        printf("\n\t* File %s is open.",f_name2);
    int i;
    while (fgets(str[i],100,ptr)!=NULL)
    {
        fputs(str[i],ptr2);
    }
return 0;
}