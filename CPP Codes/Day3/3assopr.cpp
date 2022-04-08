/* 3. Develop a C program to add two operands 
and store the result in one of the operand 
using addition assignment operator. */

#include<stdio.h>
int main(){
    int fno , sno;     // fno=fist no. and sno=second no.
    printf("\t---------Addition Assignment operatot---------\n");
    printf("\t* Enter The Value of first no. :- ");
    scanf("%d",&fno);
    printf("\t* Enter The Value of Second no. :- ");
    scanf("%d",&sno);
    fno += sno;
    printf("\t______________________________________________\n");
    printf("\t* Addition = %d\n",fno);
    printf("\t______________________________________________\n");

return 0;
}