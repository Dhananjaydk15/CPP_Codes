
#include <stdio.h>
int main()
{
    int fno, sno, i = 1, mul = 1; // fno : First No., sno : Second no.
    printf("\t------------To Find Power------------\n");
    printf("\t* Enter first no. :- ");
    scanf("%d", &fno); // fno : first no.
    printf("\t* Enter second no. :- ");
    scanf("%d", &sno); // sno : second no.
    printf("\t______________________________________\n");
    while (i <= sno)
    {
        mul = mul * fno;
        i++;
    }
    printf("\tpower of %d to the %d is %d.", fno, sno, mul);
    return 0;
}
