/* Write a C program to calculate power a given number 
using pow(a,b) function in math.h with evaluates: ab */

#include <stdio.h>
#include<math.h>
int main()
{
    int fno, sno, p; // fno : First No., sno : Second no.
    printf("\t------------To Find Power------------\n");
    printf("\t* Enter first no. :- ");
    scanf("%d", &fno); // fno : first no.
    printf("\t* Enter second no. :- ");
    scanf("%d", &sno); // sno : second no. 
    p = pow(fno,sno);
    printf("\t* power of %d to the %d is %d.\n", fno, sno,p);
    return 0;
}
