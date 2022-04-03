#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include "data.h"
struct Node* addfirst(struct Node* head,int value);
struct Node* addlast(struct Node* head,int value);
struct Node* addindex(struct Node* head,int index ,int value);



using namespace std;
int main(){
    struct Node *head ;
    struct Node *second ;
    struct Node *fifth ;
    struct Node *third ;
    struct Node *fourth ;

    head   = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));
    

    head -> data = 7 ;
    head -> next = second ;

    second -> data = 10 ;
    second -> next = third ;

    third -> data = 20 ;
    third -> next = fourth ;

    fourth -> data = 40 ;
    fourth -> next = NULL ;

    cout<<"* List Before Add :"<<endl;
    getdata(head);
    Delete_ATlast(head);
    cout<<"* List After Add :"<<endl;
    getdata(head);

    
return 0;
}

struct Node* addfirst(struct Node* head,int value){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)) ;
    ptr -> next = head ;
    ptr -> data = value ;
    return ptr ;   
}
struct Node* addlast(struct Node* head,int value){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)) ;
    struct Node* p = head ;
    ptr -> data = value ;
    while(p -> next  != NULL){
        p  = p -> next ;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head ;   
}

struct Node* addindex(struct Node* head, int index , int value)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node)) ;
    struct Node* p = head ;
    ptr -> data = value ;
    int i = 0;
    while(i != index - 1 ){
        p = p->next ;
        i++;
    }
    ptr ->data = value ;
    ptr -> next = p -> next ;
    p -> next = ptr ;
    return head ;   
}

