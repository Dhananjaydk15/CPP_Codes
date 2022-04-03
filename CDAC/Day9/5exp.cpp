/* Write a program to use exp function from math.h */
#include<stdio.h>
#include<math.h>
int main(){
double no,res;
printf("\t----------:Exponential of no.:-----------");
printf("\n\t* Enter the no. :- ");
scanf("%lf",&no);
res = exp(no);
printf("\t* Exponential of %.3lf is %.3lf.\n",no,res);
return 0;
}