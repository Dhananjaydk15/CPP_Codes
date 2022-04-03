/* Write a C Program to Count Number of Uppercase and Lowercase Letters in a given string. */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] ;
    int coutu = 0, coutl = 0;
    printf("\t* Enter the string :- ");
    gets(str); // get string :
    for (int i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // count uppercase
            coutu = coutu + 1;              // letters :
        if (str[i] >= 'a' && str[i] <= 'z') // count lowercase
            coutl = coutl + 1;              // letters :
    }
    printf("\t* Uppercase letters in the string :- %d", coutu);
    printf("\n\t* Lowercase letters in the string :- %d", coutl);
    return 0;
}