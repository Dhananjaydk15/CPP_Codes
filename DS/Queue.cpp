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
    q.size = 6;
    q.f = -1 ;
    q.r = -1 ;
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
    enqueue(&q,23);
    dequeue(&q);
    enqueue(&q,77);

    cout<<"* Queue After :"<<endl;
    i = 0 ;

    while(i != q.size){
        cout<<"* Element : "<<q.arr[i]<<endl;
        i++;
    }
return 0;
}






int isFull(struct Queue *q){
    if(q->r == q->size-1){
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
        q -> r++;
        q -> arr[q->r] = val;
    }
}

int  dequeue(struct Queue *q){
    if(isEmpty(q)){
        cout<<"* Queue is Empty : "<<endl;
    }
    else{
        int i = 0;
        while( i != q->size){
            q -> arr [i] = q -> arr[i+1];
            i++;
        }
        q->r--;
    }
    return 0;
} 