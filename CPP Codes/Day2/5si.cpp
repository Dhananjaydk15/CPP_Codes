/*5. Write a program to calculate simple interest and Total Amount using,
 formula: 𝑠𝑖=𝑝𝑟𝑖𝑛𝑐𝑖𝑝𝑙𝑒∗𝑟𝑎𝑡𝑒∗𝑡𝑖𝑚𝑒. Take all variable as float type.  */

#include <stdio.h>
int main()
{
    int p;
    int rate, time, si;
    printf("----------Simple Interest Calculator---------\n");
    printf("* Enter the principal amount :- ");
    scanf("%d", &p);
    printf("* Enter the rate of interest :- ");
    scanf("%f", &rate);
    printf("* Enter the year :- ");
    scanf("%f", &time);
    printf("---------------------------------------------\n");
    si = (p * rate * time) / 100;
    printf("* Simple Interest is %.3f\n", si);
    printf("---------------------------------------------\n");
    printf("* Total Amount is %.3f\n", si + p);
    printf("---------------------------------------------\n");
    return 0;
}