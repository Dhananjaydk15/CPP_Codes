/*Write a C program to find sum of following series where the value of n is taken as input:
1+ 1/2 + 1/3 + 1/4 + 1/5 + .. 1/n */

#include<stdio.h>
int main(){
float no, i = 1.0, sum  ;
    printf("\t* Enter The No. :- ");
    scanf("%f", &no);
    while (i<=no)
    {
        sum = sum + (1/i);
        i++;
    }
    printf("\t* Sum of Following series is %.2f",sum);
    
return 0;
}