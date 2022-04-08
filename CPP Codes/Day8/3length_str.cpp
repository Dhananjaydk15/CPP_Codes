#include <stdio.h>
#include <string.h>
int main()
{
    char str[30];
    int lenght, count = 0;
    printf("\n\t* Enter The String : ");
    scanf("%s", str);
    for (int i = 0; i < sizeof(str); i++)
    {
        if (str[i] == '\0')
            break;
        count++;
    }
    printf("\n\t* Length of string is %d", count);
    printf("\n\t* Length of string is %d. (using Lfunction)\n", strlen(str));

    return 0;
}