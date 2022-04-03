/*2. Write a C Program to find the Largest Integer among Three integers using if statement.
Note: To take input using single line Use scanf(“%d %d %d”, &num1, &num2, &num3); */

#include <stdio.h>
int main()
{
    int fno, sno, tno;
    printf("\t---------To Find Greatest No.---------\n");
    printf("\t* Enter three no. :- ");
    scanf("%d %d %d", &fno, &sno, &tno);
    printf("\t______________________________________\n");
    if (fno == sno && sno == tno)
        printf("\t* All numbers are same.\n");
    else if (fno > sno && fno > tno)
        printf("\t* %d is Greatest no.\n", fno);
    else if (sno > fno && sno > tno)
        printf("\t* %d is Greatest no.\n", sno);
    else
        printf("\t* %d is Greatest no.\n", tno);
    printf("\t______________________________________\n");
    return 0;
}