5. Write a program in C to replace a specific line with another text in a file.
#include<stdio.h>
int main(){
    char str[100][100];
    int size;
    FILE *ptr,*ptr2;
        char f_name[10];
    printf("\n\t* Enter The File Name : ");
    scanf("%s",f_name);
    ptr = fopen(f_name,"r");
    if(ptr==NULL)
    {
        printf("\t* File %s is not open.",f_name);
    }
    else
    {
        printf("\t* File %s is open.",f_name);
        
    }
    printf("\n\t* Enter the number of line which is you want to replace : ");
    scanf("%d",&size);
    rewind(ptr);
    ptr2 = fopen(f_name,"w");
     while (c != EOF)
    {
        if (c == 'n')
        {
            temp++;
        }
        till the line to be deleted comes,copy the content to other
        if (temp != delete_line)
        {
            putc(c, fileptr2);
        }
        else
        {
            while ((c = getc(fileptr1)) != 'n')
            {
            }
            read and skip the line ask for new text
            printf("Enter new text");
            flush the input stream
            fflush(stdin);
            putc('n', fileptr2);
            put 'n' in new file
            while ((c = getchar()) != 'n')
                putc(c, fileptr2);
            take the data from user and place it in new file
            fputs("n", fileptr2);
            temp++;
        }
    for (int i = 0; i <= size; i++)
    {
        fflush(stdin);
        if(i == size){
        printf("\t");
        gets(str[i]);
        fputs(str[i],ptr);
        }
    }
    fclose(ptr);
return 0;
}