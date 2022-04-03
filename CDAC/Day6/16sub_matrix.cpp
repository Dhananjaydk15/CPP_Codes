/* Write a C program to find subtraction of two matrices 
i.e. matrix_A -matrix_B=matrix_C. */
    #include<stdio.h>
    int main(){
        int arr1[10][10],arr2[10][10],arr3[10][10],sum=0,row,col;
    printf("* Rows :- ");
    scanf("%d",&row);
    printf("* Coloums :- ");
    scanf("%d",&col);
    printf("* Enter The Elements in first matrix :- \n");
    for(int i = 0 ; i < row ; i++)
    {
        printf("\t\t\t");
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr1[i][j]);
        }       
    }
    printf("* Enter The Elements in first matrix :- \n");
        for(int i = 0 ; i < row ; i++)
    {
        printf("\t\t\t");
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr2[i][j]);
        }       
    }
    printf("* After subtraction:- \n");
    for(int i = 0 ; i < row ; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr3[i][j]=arr1[i][j] - arr2[i][j];
        }       
    }
    for (int i = 0; i < row; i++)//for loop for print subtracted matrix:
    {
        printf("\t\t");
        for (int j = 0; j < col; j++)
        {
            if(arr3[i][j]<0){
               printf("%d ",arr3[i][j]);
               continue;
            }
            printf(" %d ",arr3[i][j]);
        }
        printf("\n");
        
    }
    
    return 0;
    }