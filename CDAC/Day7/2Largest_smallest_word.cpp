/* Write a C program to print Largest and Smallest Word from a given sentence.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char words[100][100], small[100], large[100], str[100];
    int i = 0, j = 0, k, length;
    printf("\t* Enter the string :- ");
    gets(str); // get string :
    for (k = 0; str[k] != '\0'; k++)
    {
        if (str[k] != ' ' && str[k] != '\0')
        {
            words[i][j++] = str[k];
        }
        else
        {
            words[i][j] = '\0';
            // Increment row
            i++;
            j = 0;
        }
    }
    length = i + 1;
    strcpy(small, words[0]);
    strcpy(large, words[0]);
    for (k = 0; k < length; k++)
    {
        if (strlen(small) > strlen(words[k]))
        {
            strcpy(small, words[k]);
        }
        if (strlen(large) < strlen(words[k]))
            strcpy(large, words[k]);
    }

    printf("\t* Smallest word from sentence:- %s\n", small);
    printf("\t* Largest word from sentence:- %s", large);

    return 0;
}