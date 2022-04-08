//1. Write a program in C to write multiple lines in a text file.
#include<stdio.h>
int main(){
    char str[100][100];
    int size;
    FILE *ptr;
        char f_name[10];
    printf("\n\t* Enter The File Name : ");
    scanf("%s",f_name);
    ptr = fopen(f_name,"w");
    if(ptr==NULL)
        printf("\t* File %s is not open.",f_name);
    else
        printf("\t* File %s is open.",f_name);
    printf("\n\t* Enter How many line you want to write : ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        fflush(stdin);
        printf("\t");
        gets(str[i]);
        fputs(str[i],ptr);
        fputs("\n",ptr);
    }
    fclose(ptr);
return 0;
}