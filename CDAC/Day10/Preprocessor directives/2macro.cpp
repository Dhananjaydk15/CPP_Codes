#include <stdio.h>
#define PI 3.14 //PI as macro and assign value :
int main()
{
    int red; // declere redius veriable :
    float a; // declear area as float data type :
    printf("\t-----------:Area of Circle:-----------\n");
    printf("\t* Enter The Radius of Circle : ");
    scanf("%d", &red);// read redius of circle :
    a = PI * ( red * red);
    printf("\t* Area of circle is %.2f\n",a);
    printf("\t--------------------------------------\n");

    return 0;
}