/*12. Write a C program to read Two One Dimensional Arrays of same data type (integer type) 
and merge them into another One Dimensional Array of same type. */
#include<stdio.h>
int main(){
    int no;
    int len1,len2, arr1[100],arr2[100],arr[100], i, j, temp;
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len1);
    printf("\t* Enter Array Element of first array :- \n");
    for(int i = 0 ; i < len1 ; i++){
        scanf("%d",&arr1[i]);
    }
    printf("\t* Enter The Lenght(upto 100) :- ");
    scanf("%d", &len2);
    printf("\t* Enter Array Element of second array :- \n");
        for(int i = 0 ; i < len2 ; i++){
        scanf("%d",&arr2[i]);
    }
    printf("\n%d",len1+len2);
    for( i = 0 ; i < len1; i++){
        arr[i] = arr1[i];
        }
    for ( j = 0; j <= len2; j++){
        arr[i]=arr2[j];
        i++;
    }
    for ( i = 0; i < len1+len2; i++){
        printf("\n%d",arr[i]);
    }
return 0;
}