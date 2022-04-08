/* 1. Arithmetic operations of Two Whole numbers.*/
#include <stdio.h>
int main()
{
    float fno, sno, ans;
    printf("\t-------------Arithmetic Operations-------------\n");
    printf("\t* Enter The First No. :- ");
    scanf("%f", &fno);
    printf("\t* Enter The Second No. :- ");
    scanf("%f", &sno);
    printf("\t_____________________________________________");
    ans=fno+sno;
    printf("\n\n\t* Addition of %.2f and %.2f is %.2f", fno, sno,ans);
    ans=fno-sno;
    printf("\n\n\t* Subtraction of %.2f and %.2f is %.2f", fno, sno,ans);
    ans=fno*sno;
    printf("\n\n\t* Multiplication of %.2f and %.2f is %.2f", fno, sno,ans);
    ans=fno/sno;
    printf("\n\n\t* Division of %.2f and %.2f is %.2f", fno, sno,ans);
    printf("\n\t_____________________________________________\n");

    return 0;
}