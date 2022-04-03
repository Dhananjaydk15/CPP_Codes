#include<stdio.h>

#include<math.h>

int main(){

int fno , sno ;

printf("* Enter the fno : ");

scanf("%d",&fno);

double sum = ((6*pow(fno,5))+(5*pow(fno,4))-(4*pow(fno,3))+(3*pow(fno,2))+(2*fno)+(1));

printf("%ld",sum);

return 0;
}