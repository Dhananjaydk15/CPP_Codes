/* Write a C program to print lower triangle of a square matrix. */
#include <stdio.h>
int main()
{
    int arr[10][10], arr1[10], sum = 0, row, col;
    printf("* Rows :- ");
    scanf("%d", &row);
    printf("* Coloums :- ");
    scanf("%d", &col);
    printf("* Enter The Elements :- \n");
    for (int i = 0; i < row; i++)
    {
        printf("\t\t\t");
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("* lower triangle of a square matrix :- \n");
    for (int i = 0; i < row; i++)
    { 
        printf("\t\t\t");
        for (int j = 0; j < col; j++)
        {
            if (i < j)
            {
                printf("0 ");
            }
            else
                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}