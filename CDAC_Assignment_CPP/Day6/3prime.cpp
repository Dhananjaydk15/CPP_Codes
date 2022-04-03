/* 3. Write a program in C to find whether a number n is prime number or not */
#include <stdio.h>
int main()
{
    int no, i, temp = 0, flag = 0;
    printf("\t----------To check prime:--------\n");
    printf("\t* Enter the number :- ");
    scanf("%d", &no);
    temp = no / 2;
    for (i = 2; i <= temp; i++)
    {
        if (no % i == 0)
        {
            printf("\n\t* %d is not prime no.", no);
            printf("\n\t_________________________________");

            flag = 1;
            break;
        }
    }
    if (flag == 0){
        printf("\n\t* %d is prime no.", no);
        printf("\n\t_________________________________");
}
    return 0;
}