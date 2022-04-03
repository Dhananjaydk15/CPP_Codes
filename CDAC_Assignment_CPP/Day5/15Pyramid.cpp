/* 15. Write a C program to print the following Pyramid pattern upto Nth row. 
Where N (number of rows to be printed) is taken as input. */
#include<stdio.h>
int main(){
    int no ;
    printf("* Enter The height of Pyramid :- ");
    scanf("%d",&no);
    for(int i = no; i > 0 ; i--){
        for (int j = i; j > 0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
return 0;
}