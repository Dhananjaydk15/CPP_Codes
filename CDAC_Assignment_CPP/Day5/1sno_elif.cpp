#include<stdio.h>
int main()
{
    int  a, b, c, small;
    printf("\t---------To Find Grattest No.---------\n");
    printf("\tEnter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\t______________________________________\n");
    if(a==b && b==c){
        printf("\n\t* All Are Same.");
        printf("\n\t______________________________________\n");
        return 0;
    }
    if(a<b)
    {
        if(b<c)
            printf("\n\t* Smallest number is: %d", a);
        else
        {
            if(a<c)
                 printf("\n\t* Smallest number is: %d", a); 
            else
                 printf("\n\t* Smallest number is: %d", c);
        }
    }
    else
    {
        if(b<c)
             printf("\n* Smallest number is: %d", b);
        else
             printf("\n* Smallest number is: %d", c);
    }
    printf("\n\t______________________________________\n");
    return 0;
}