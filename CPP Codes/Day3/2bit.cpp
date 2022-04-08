/* 2.Write the program to demonstrate bitwise operator.  */
#include<stdio.h>
int main(){
    int fno, sno;
    printf("\t-----------------Bitwise Operators-----------------\n");
    printf("\t* Enter The First No. :- ");
    scanf("%d",&fno);
    printf("\t* Enter The Second No. :- ");
    scanf("%d",&sno);
    printf("\t___________________________________________________\n");
    printf("\n\t* Value of Bitwise AND (&) is %d",fno&sno);   
    printf("\n\t* Value of Bitwise OR (|) is %d",fno|sno);    
    printf("\n\t* Value of Bitwise XOR (^) is %d",fno^sno);
    printf("\n\t* Value of Left Shift (<<) is %d and %d",fno<<1,sno<<1);
    printf("\n\t* Value of Right Shift (>>) is %d and %d",fno>>1,sno>>1);
    printf("\n\t_________________________________________________\n");

    
return 0;
}