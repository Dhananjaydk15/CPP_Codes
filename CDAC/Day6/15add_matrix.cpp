/* Write a C program to find the sum of all elements of each row of a matrix. */
#include<stdio.h>
int main(){
    int arr[10][10],arr1[10],sum=0,row,col;
    printf("* Rows :- ");
    scanf("%d",&row);
    printf("* Coloums :- ");
    scanf("%d",&col);
    printf("* Enter The Elements :- \n");
    for(int i = 0 ; i < row ; i++)
    {
        printf("\t\t\t");
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr[i][j]);
            sum=sum + arr[i][j];
        }
        arr1[i] = sum;
        sum = 0;
        
    }
    printf("* Sum of all elements in each row :- ");
    for (int i = 0; i < col; i++)
    {
        printf("\n\t\t\t\t   ");
        printf("%d",arr1[i]);
    }
    
return 0;
}