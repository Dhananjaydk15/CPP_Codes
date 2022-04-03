/*1. Write a C program to calculate volume of a box.
A box can be represented by three quantities: 
length, width and height in inches.
Volume can be calculated as:
volume = height * length * width
Take the input from user (using scanf) and print the volume as a result.
Use float data types for all variables*/

#include <stdio.h>
int main()
{
    float vol, l, w, h;

    printf("-------- Volume of Box --------\n");
    printf("* Enter The value of length : ");
    scanf("%f", &l);
    printf("* Enter The value of width : ");
    scanf("%f", &w);
    printf("* Enter The value of height : ");
    scanf("%f", &h);
    vol = l * h * w;
    printf("-------------------------------\n");
    printf("* Volume of Box :- %.2f\n", vol);
    printf("-------------------------------");
    return 0;
}
