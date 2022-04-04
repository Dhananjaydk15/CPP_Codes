#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

// Linked List :
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// Stack :
struct stack
{
    int size;
    int top;
    char *arr;
};

//--------------------------------------: Linked List Deletion :------------------------------------------------------------------

void getdata(struct Node *ptr);
struct Node *Delete_head(struct Node *ptr);                    // 63//Deletion of Head Node : O(1)
struct Node *Delete_ATindex(struct Node *head, int index);     // 70 // Deletion of Node At The Given Index : O(n)
struct Node *Delete_ATgivenvale(struct Node *head, int value); // 83 // Deletion of Node At Given Value :O(n)
struct Node *Delete_ATlast(struct Node *head);                 // 97 // Deletion Last Node of List : O(n)
//--------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------: Linked List Insertion :----------------------------------------------------------------

struct Node *insert_front(struct Node *ptr, int data);            // 100 //O(1)            // Insert Node At The Front :
struct Node *insert_Index(struct Node *ptr, int data, int index); // Insert Node At The Given Index :
struct Node *insert_Atend(struct Node *ptr, int data);            // 124  //O(n)           // Insert Node At The End of Linked List :
struct Node *insert_Atnext(struct Node *ptr, int data);           // 138  //O(n)          // Insert Node At The Next of Given Index of List :
//--------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------: Circuler Linked List :-----------------------------------------------------------------
struct Node *Cinsert_front(struct Node *ptr, int data);  // 150  //O(1)           // Insert Node At The Front :
struct Node *Cinsert_Atend(struct Node *head, int data); // 165  //O(n)          // Insert Node At The End of Linked List :
//--------------------------------------------------------------------------------------------------------------------------------
//---------------------------------------: Stack :--------------------------------------------------------------------------------
int isEmpty(struct stack *ptr);          // 177//O(1)
int isFull(struct stack *ptr);           // 183//O(1)
void push(struct stack *ptr, int value); // 190//O(1)
int pop(struct stack *ptr);              // 207//O(1)
int peak(struct stack *ptr, int i);      // 221//O(1)
//--------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------: Linked List Traversal :----------------------------------------------------------------
void getdata(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "* Enter The  Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

//---------------------------------------: Linked List Deletion :-----------------------------------------------------------------

struct Node *Delete_head(struct Node *head) // Deletion of Head Node : O(1)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *Delete_ATindex(struct Node *head, int index) // Deletion of Node At The Given Index : O(n)
{
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}
struct Node *Delete_ATgivenvale(struct Node *head, int value) // Deletion of Node At Given Value :O(n)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
struct Node *Delete_ATlast(struct Node *head) // Deletion of Node At last Node :O(n)
{
    struct Node *p = head;
    struct Node *q = head->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
}
//---------------------------------------------------------------------------------------------------------------------------------

//---------------------------------------: Linked List Insertion :-----------------------------------------------------------------
struct Node *insert_front(struct Node *head, int data) // Insert Node At The Front : O(1)
{
    struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
    ptr2->next = head;
    ptr2->data = data;
    return ptr2;
}

struct Node *insert_Index(struct Node *head, int data, int index) // Insert Node At The Given Index : O(n)
{
    struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr2->data = data;
    ptr2->next = p->next;
    p->next = ptr2;
    return head;
}

struct Node *insert_Atend(struct Node *head, int data) // Insert Node At The End of Linked List : O(n)
{
    struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    ptr2->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr2;
    ptr2->next = NULL;
    return ptr2;
}

struct Node *insert_Atnext(struct Node *node, int data) // Insert Node At The Next of Given Index of List : O(n)
{
    struct Node *ptr2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = node;
    ptr2->data = data;
    ptr2->next = p->next;
    p->next = ptr2;

    return node;
}
//---------------------------------------------------------------------------------------------------------------------------------

//----------------------------------------------------------Insertion of Circuler Linked list :------------------------------------
struct Node *Cinsert_front(struct Node *head, int data) // Insert Node At The Front : O(1)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *Cinsert_Atend(struct Node *head, int data) // Insert Node At The End of Linked List : O(n)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    // head = ptr ;
    return head;
}
//-------------------------------------------------------------------------------------------------------------------------------

//--------------------------------------------------------: Stack Oprations :----------------------------------------------------

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

void push(struct stack *ptr, int val) // stack Push : O(1)
{
    if (isFull(ptr))
    {
        cout << "Stack OverFlow :" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr) // Stack pop : O(1)
{
    if ((isEmpty(ptr)))
    {
        cout << "* Stack is UnderFlow :" << endl;
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i) /// Stack peek : O(1)
{
    if (ptr->top - 1 + 1 < 0)
    {
        cout << "invalid Posotion :" << endl;
        return -1;
    }
    else
    {
        return ptr->arr[ptr->top - i + 1];
    }
}
//-----------------------------------------------------------------------------------------------------------------------------------------------------