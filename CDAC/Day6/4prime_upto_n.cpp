/* 4. Write a program in C to find all prime numbers from 1 to n. */
#include <stdio.h>
int main()
{
    int no, i, temp = 0, flag = 0, j, count = 0;
    printf("\t----------To check prime:--------\n");
    printf("\t* Enter the Range :- ");
    scanf("%d", &no);
    printf("\t_________________________________\n\t");
    for (j = 2; j <= no; j++)
    {
        for (i = 2; i <= j / 2; i++)
        {
            if (j % i == 0){
                flag = 1;
                break;
            }
            flag = 0;
        }
        if (flag == 0){
            count = count + 1;
            printf("%d, ", j);
        }
    }
    printf("\n\t* There are %d prime no. between 1 and %d.", count, no);
    return 0;
}