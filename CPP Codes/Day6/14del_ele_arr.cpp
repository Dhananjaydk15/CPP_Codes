/* C Program to delete an element from a specified location of an Array */
#include<stdio.h>
int main(){
    int len, arr[100], i, j, temp,p;
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len);
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++)//scan element in array:
    {
        printf("\t\t\t\t");
        scanf("%d", &arr[i]);//scan each element
    }                       //one by one:
    printf("\t* Enter The Position where you want to delete:- ");
    scanf("%d",&p);
    for(i = p-1 ; i < len-1 ; i++){
           arr[i]=arr[i+1];
    }
    for(i = 0;i < len-1;i++){
        printf("\n\t\t\t\t");
        printf("%d",arr[i]);
    }
return 0;
}