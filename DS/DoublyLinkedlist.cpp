#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include "data.h"
using namespace std;
void Cgetdata(struct Node* head);
struct Node* Cinsert_front(struct Node *ptr, int data);            // Insert Node At The Front : O(1)
struct Node *Cinsert_Atend(struct Node *head, int data);            // Insert Node At The End of Linked List : O(n)


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
    fourth -> data = 40 ;
    second -> data = 10 ;
    third -> data = 20 ;  
    
      
    head -> next = second ;
    head -> prev = NULL;
    second -> next = third ;
    second -> prev = head ;
    third -> next = fourth ;
    third -> prev = second ;
    fourth -> next = NULL;
    fourth -> prev = third ;
    cout<<"* Before : "<<endl;
    Cgetdata(fourth);
return 0;
}
void Cgetdata(struct Node* head){
    struct Node* p = head ;
    do
    {        
        cout<<"* Print Element : "<<p -> data <<endl;
        p = p -> prev ;
        
    }while (p -> prev != head);  
    cout<<"* print Element : "<<p->data<<endl;
}