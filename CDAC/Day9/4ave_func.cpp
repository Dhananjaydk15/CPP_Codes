/*Implement average function of two numbers as below: */
double average(double, double);////function declaration:
#include<stdio.h>
int main(){
    double fno,sno;
    printf("\t------------:Average of two no:-----------");
    printf("\n\t* Enter the fist no. :- ");
    scanf("%lf",&fno);//fno:first no.:
    printf("\t* Enter the second no. :- ");
    scanf("%lf",&sno);//sno:second no.:
    printf("\t* Average of %.2lf and %.2lf is %.2lf.\n",fno,sno,average(fno,sno));
    return 0;                                                //function call:
}
double average(double x, double y)//fuction defination:
{
    return (x+y)/2;
}