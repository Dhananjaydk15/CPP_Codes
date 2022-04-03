#include<conio.h>
#include<stdlib.h>
#include<iostream>
int isEmpty(struct stack *ptr);
int isFull(struct stack *ptr);
void push(struct stack *ptr,int value);
int pop(struct stack* ptr);
int peak(struct stack *ptr,int i );
using namespace std;
struct stack{
    int size ;
    int top ;
    int *arr ;
};


int main(){
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 6;
    s->top = -1 ;
    s->arr = (int*)malloc(s->size * sizeof(int));

    if(isEmpty(s)){
        cout<<"* Stack is Empty :"<<endl;
    }
    else{
        cout<<"* Stack is Not Empty :"<<endl;
    }
    // cout<<"Stack is Empty or Not :"<<endl;

    push(s,56);
    push(s,57);
    push(s,58);
    push(s,59);
    push(s,60);
    push(s,46);
    cout<<isFull(s)<<endl;
        for (int i = 0; i <=  s->top; i++)
    {
        cout<<s->arr[i]<<endl;
    }
cout<<"After :"<<endl;
        for (int i = 0; i <=  s->top; i++)
    {
        cout<<peak(s,i)<<endl;
    }
return 0;
}