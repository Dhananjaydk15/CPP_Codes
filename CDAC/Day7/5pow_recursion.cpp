/* Write a C Program to find power of a given number using recursion. */
#include <stdio.h>
int pow(int x,int y);
int main()
{
    int fno, sno; // fno : First No., sno : Second no.
    printf("\t------------To Find Power------------\n");
    printf("\t* Enter first no. :- ");
    scanf("%d", &fno); // fno : first no.
    printf("\t* Enter second no. :- ");
    scanf("%d", &sno); // sno : second no.
    // pow(fno,sno);
    printf("\t* power of %d to the %d is %d.", fno, sno,pow(fno,sno));
    return 0;
}
int pow(int x,int y)
{
    if(y!=0)
    return x * pow(x,y-1);
    else
    return 1;
}
