/*3 .Write a program to calculate volume of a sphere with 10-meter radius,
using the formula 𝑣=4/3𝜋𝑟3.
Write the fraction 4/3 as 4.0f/3.0f .
Use variable name for 𝜋 as PI and store value as 22.0f/7.0f.
Modify same program and prompt the user to enter the radius.*/

#include <stdio.h>
#include <math.h>
#define PI 3.14
int main()
{
    float vol, r, cir;
    printf("-------- Volume of a Sphere --------\n");
    printf("* Enter The Value of Radius :- ");
    scanf("%f", &r);
    cir = (4.0 / 3.0) * PI * pow(r, 3);
    printf("-------------------------------------------\n");

    printf("* Volume of Sphere is %.2f.\n", cir);
    printf("-------------------------------------------\n");

    return 0;
}