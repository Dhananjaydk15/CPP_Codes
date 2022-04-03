/* 13. Write a C Program to delete duplicate elements from an array of integers. */
#include<stdio.h>
int main(){
        int len,arr[10], i, j, temp,arr2[10],cout = 0;
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len);
        temp = len;
    printf("\t* Enter Array Element :- \n");
    for (i = 0; i < len; i++)//scan element in array:
    {
        printf("\t\t\t\t");
        scanf("%d", &arr[i]);//scan each element
    }                       //one by one:
    for(i = 0 ; i<len;i++){
        for(j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                  arr[j]=arr[j+1];
            }
        }
    }
    printf("* Array after deletion of duplicate elements from an array :-  ");
    for(int i = 0; i < j-2 ; i++)
    {
        printf("\n\t\t\t\t");
        printf("%d",arr[i]);
    }
return 0;
}