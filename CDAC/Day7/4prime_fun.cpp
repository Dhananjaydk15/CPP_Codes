#include <stdio.h>
int checkprime(int num);
int main()
{
    int no;
    printf("\t----------To check prime:--------\n");
    printf("\t* Enter the number :- ");
    scanf("%d", &no);
    checkprime(no);
    return 0;
}

int checkprime(int num)
{
    int i, temp = 0, flag = 0;
    temp = num / 2;
    for (i = 2; i <= temp; i++)
    {
        if (num % i == 0)
        {
            printf("\t* %d is not prime no.", num);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("\t* %d is prime no.", num);
    }
    return 0;
}