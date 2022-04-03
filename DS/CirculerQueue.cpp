#include<conio.h>
#include<stdlib.h>
#include<iostream>
void enqueue(struct Queue *q,int val);
int dequeue(struct Queue *q);
int isFull(struct Queue *q);
int isEmpty(struct Queue *q);
using namespace std;
struct Queue
{
    int size ;
    int f ;
    int r ;
    int *arr;
};

int main(){
    struct Queue q;
    q.size = 8;
    q.f = 0 ;
    q.r = 0 ;
    q.arr = (int *)malloc(q.size * sizeof(int));
    isEmpty(&q);
    enqueue(&q,12);
    enqueue(&q,55);
    enqueue(&q,44);
    enqueue(&q,44);
    enqueue(&q,11);
    enqueue(&q,22);
    cout<<"* Queue Before :"<<endl;
    int i = 0 ;
    while(i != q.size){
        cout<<"* Element : "<<q.arr[i]<<endl;
        i++;
    }
    //Dequeue :
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    cout<<"* Queue After :"<<endl;
    i = 0;

    while(i != q.size){
        cout<<"* Element : "<<q.arr[i]<<endl;
        i++;
    }
return 0;
}






int isFull(struct Queue *q){
    if((q->r+1)%q->size == q->f){
        return 1;
    }
    return 0;
}
int  isEmpty(struct Queue *q){
    if(q->r == q -> f){
        return 1;
    }
    else
       return 0;
}
void enqueue(struct Queue *q,int val)
{
    if(isFull(q)){
        cout<<"* This Queue is Full :"<<endl;
    }
    else{
        q -> r = (q->r+1)%q->size;
        q -> arr[q->r] = val;
    }
}

int  dequeue(struct Queue *q){
   int  i = -1 ;
    if(isEmpty(q)){
        cout<<"* Queue is Empty : "<<endl;
    }
    else{
        
        q->f = (q->r+1)%q->size;
        i = q -> arr[q->f];
    }
    return i;
} 