/*2. Write a program to calculate area and circumference of a circle.
 using formula: ππππ=ππ2 and πππππ’ππππππππ=2πr. 
 Take the input r from the user.
Note: C doesnβt have an exponentiation operator,
so that you will need to multiply x by itself repeatedly to compute powers of x.
-----------------------------------------------------------------*/

#include <stdio.h>
int main()
{

    float r, PI = 3.14, cir, a;
    printf("-------------------------------------------\n");
    printf("* Enter The Value of Radius :- ");
    scanf("%f", &r);
    cir = 2.0 * PI * r;
    printf("\n-------- Circumference of a Circle --------\n");
    printf("* Circumference of Circle is %.2f.\n", cir);
    printf("\n------------ Area of a Circle -------------\n");
    a = PI * r * r;
    printf("* Area of Circle is %.2f.\n", a);
    printf("\n-------------------------------------------\n");
    return 0;
}