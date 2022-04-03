// 3. Write a program in C to count a number of words and characters in a file.
#include <stdio.h>
int main()
{
    char c ;
    FILE *ptr;
    char f_name[10],str[100][100];
    int count = 0, word = 0;
    printf("\n\t* Enter The File Name : ");
    scanf("%s", f_name);
    ptr = fopen(f_name, "r");
    if (ptr == NULL)
    {
        printf("\t* File %s is not open.",f_name);
    }
    else
    {
        printf("\t* File %s is open.",f_name);
    }
    int i = 0;
    printf("\n\t* The content of the file test.txt are : \n");
    while (fgets(str[i], 100, ptr) != NULL)
    {
        printf("\t%s", str[i]);
    }
    fclose(ptr);
    ptr = fopen("test.txt", "r");
    while (1)
    {

        c = fgetc(ptr);
        if (feof(ptr))
        {
            break;
        }
        if (c == ' ' || c == '\n')
            word = word + 1;
        if (c != '\n')
            count = count + 1;
        if (c == ' ')
            count = count - 1;
    }
    printf("\n\t* The number of words in the file : %d", word);
    printf("\n\t* The number of characters in the file : %d", count);
    return 0;
}