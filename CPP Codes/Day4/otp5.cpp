/*8. What is output of following program?*/
#include <stdio.h>
int main()
{
    int x = 0;
    if (x++)
        printf(" true \n");
    else if (x == 1)
        printf("false\n");
    return 0;
}
