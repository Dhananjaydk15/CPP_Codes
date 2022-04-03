#include<conio.h>
#include<stdlib.h>
#include<iostream>
#define hello( n ) a##n
static int a3;
using namespace std;
int main(){
    int x ;
    x = hello(3);
    if(x!=0)
    printf("hi");
    else
    printf("good");
    
return 0;
}