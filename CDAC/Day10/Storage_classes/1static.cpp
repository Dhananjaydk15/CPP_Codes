/* Using Static keyword, keep a count of the number of times a function was called.*/
#include <stdio.h>
int func(int);
int main()
{
    int no, i;
    printf("\n\t* Enter The No:- ");
    scanf("%d",&no);
    for(i = 0; i <= no ; i++){ //call the function :
        func(i);
    }
        printf("\n\t* function was called %d times.\n",func(i));
    return 0;
}
int func(int no)
{
    static int count = 0 ;
    return count++; 
}