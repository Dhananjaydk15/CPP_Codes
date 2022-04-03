//2. Write a program in C to read the file and 
//store the lines into an array.
#include<stdio.h>
int main(){
    char str[100][100];
    FILE *ptr;
    char f_name[10];
    printf("\n\t* Enter The File Name : ");
    scanf("%s",f_name);
    ptr = fopen(f_name,"r");
    if(ptr==NULL)
        printf("\t* File %s is not open.",f_name);
    else
        printf("\t* File %s is open.",f_name);    
    int i = 0;
    printf("\n\t* The content of the file test.txt are : \n");
    while(fgets(str[i],100,ptr)!=NULL){
        printf("\t%s",str[i]);
    }
    fclose(ptr);
return 0;
}