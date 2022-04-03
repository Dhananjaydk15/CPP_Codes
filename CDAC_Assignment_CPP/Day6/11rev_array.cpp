/* Write a C Program to print the array elements in reverse order (Not reverse sorted order. */
#include<stdio.h>
int main(){
    int len, arr[100], i, j, temp;
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++)//scan element in array:
    {
        printf("\t\t\t\t");
        scanf("%d", &arr[i]);//scan each element
    }                       //one by one:
    printf("\n\t* Array element in reverse order :-\n");
    for(j = len-1; j >= 0; j--)
    {
        printf("\t\t\t\t");
        printf("%d\n",arr[j]);
    }
    printf("\t_________________________________\n");
return 0;
}