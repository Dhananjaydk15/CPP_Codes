#include<conio.h>
#include<stdlib.h>
#include<iostream>
void getdata(struct Node* head);
struct Node* shift(struct Node* head,int value);

using namespace std;
struct Node{
    int data ;
    struct Node* next;
};
int main(){
struct Node* head ;
struct Node* second ;
struct Node* third ;
struct Node* fourth ;

//Memory Allocation :

head = (struct Node* )malloc(sizeof(struct Node));
second = (struct Node* )malloc(sizeof(struct Node));
third = (struct Node* )malloc(sizeof(struct Node));
fourth = (struct Node* )malloc(sizeof(struct Node));

//variabl Diclearation :

head -> data = 10 ;
head -> next = second ;

second -> data = 20 ;
second -> next = third ;

third -> data = 30 ;
third -> next = fourth ;

fourth -> data = 50 ;
fourth -> next = NULL ;

cout << "Before :"<<endl;
getdata(head);
head = shift(head,20);
head = shift(head,30);
head = shift(head,50);
head = shift(head,10);
head = shift(head,20);
cout<<"After :"<<endl;
getdata(head);
return 0;
}

void getdata(struct Node* head){
    while(head != NULL){
    cout<<"Enter The Element : "<<head -> data<<endl;
    head = head -> next ;
    }
}

struct Node* shift(struct Node* head,int value)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));

    struct Node* p = head ;
    struct Node* q = head -> next ;
        if(p -> data == value){
            ptr -> data = p -> data ;
            while (q -> next != NULL)
            {
                q = q ->next ;
            }
            q->next = ptr ;
            ptr -> next = NULL ;
            head = p->next ;
        free(p);
        return head ;
    }
    while (q->data != value)
    {
        p = p->next;
        q = q->next ;
    }
    ptr -> data = q -> data ;
    p -> next = q ->next ;
    free(q);
    while (p -> next != NULL)
    {
        p  = p -> next ;
    }
    p ->next = ptr ;
    ptr -> next = NULL ;
    return head;

}
