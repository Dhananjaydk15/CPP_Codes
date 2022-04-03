#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include "data.h"
int stacktop(struct stack *sp);
int isOperator(char ch);
int precedance(char ch);
char *infixtopostfix(char *infix);
using namespace std;
int main()
{
    char *infix = "a/b^c-d";
    cout<<"Postfix :- "<<infixtopostfix(infix)<<endl;
    return 0;
}

int stacktop(struct stack *sp)
{
    return sp->arr[sp->top];
}

char *infixtopostfix(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // Track infix traversal
    int j = 0; // Track postfix addition
    while (infix[i] != '\0')
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else
        {
            if (precedance(infix[i]) > precedance(stacktop(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
            while (!isEmpty(sp))
        {
            postfix[j] = pop(sp);
            j++;
        }
        postfix[j] = '\0';
            return postfix;

}

int isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}

int precedance(char ch)
{
    if (ch == '*' || ch == '/')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 0;
}