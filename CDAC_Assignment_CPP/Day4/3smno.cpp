/*3. Write a C Program to find the Smallest Integer among Three integers.
 using IF and Logical && operator.
*/
#include <stdio.h>
int main()
{
    int fno, sno, tno;
    printf("\t-----------To Find Smallest-----------\n");
    printf("\t* Enter three no. :- ");
    scanf("%d %d %d", &fno, &sno, &tno);
    printf("\t______________________________________\n");

    if (fno == sno && sno == tno)
        printf("\t* All numbers are same.\n");
    else if (fno < sno && fno < tno)
        printf("\t* %d is Smallest no.\n", fno);
    else if (sno < fno && sno < tno)
        printf("\t* %d is Smallest no.\n", sno);
    else
        printf("\t* %d is Smallest no.\n", tno);
    printf("\t______________________________________\n");

    return 0;
}