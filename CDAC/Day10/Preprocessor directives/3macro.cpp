/*Write a for loop to print numbers from 1 to 20. 
The for loops has to be written as a
multiline macro */
#include<stdio.h>
#define forlo(no) for(int i = 0 ; i < no ; i++ ) printf("%d, ",i+1);
int main(){
    printf("* Print Number from 1 to 20 : ");
    forlo(20);
return 0;
}