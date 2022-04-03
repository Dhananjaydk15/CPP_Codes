#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "data.h"
using namespace std;
struct Node* push(struct Node *top, int x);
int isFull(struct Node *top);
int isEmpty(struct Node *top);



int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node* push(struct Node *top, int x)
{
    if (isFull(top))
    {
        cout << "Stack Overflow\n :" << endl;
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
    }
            return top;
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        struct Node* n = *top ;
        *top = (*top) ->next ;
        int x = n -> data ;
        free(n);
            return x ;
    }
    return 0;
}
int main()
{

    struct Node *top = NULL;
    top = push(top,10);
    top = push(top,20);
    top = push(top,30);
    top = push(top,40);
    top = push(top,50);
    top = push(top,60);
    top = push(top,70);
    cout<<"Before :"<<endl;
    getdata(top);
    cout<<"After : "<<endl;
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top);
    pop(&top);

    getdata(top);
    return 0;
}