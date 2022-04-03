/* Concat two numbers to create a single number using ## operator:
Ex: 11882, 619 => 61911882 */
#include<stdio.h>
//## - It concatenates two tokens : 
#define CONCAT(x,y) x##y  //12345##4321 = 123454321 :
int main(){ 
    printf("\n\t* Concatenated no.:- %d",CONCAT(12345,4321));
    //token1 = 12345; //token2 = 4321;
return 0;
}