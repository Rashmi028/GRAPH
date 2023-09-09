#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int *arr;
};
int Full(struct Queue*q)
{
    if(q->r=q->f)
    {
        return 1;
    }
    return 0;
}
int Empty(struct Queue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct Queue *q,int value)
{
    if(Full(q))
    {
        Printf("Queue overflow");
    }
    else{
        q->r=(q->r+1)%size;
        q->arr[q->r]=value;
    
    }
}

 int dequeue(struct Queue *q)
 {
    int value= -1;
    if(Empty(q))
    {
        Printf("Queue is empty");

    }
    else{
        q->f=(q->f+1)%size;
        value=q->arr(r->f);
    }
    return value;
 }
 int main ()
 {
    struct queue q;
    q.arr= (int *)malloc(sizeof(int));
    q.size=5;
    q.f=q.r=-1;
    enqueue(&q,23);
    enqueue(&q,43);
    enqueue(&q,20);
    enqueue(&q,56);
 
 printf("Dequeuing element %d",dequeue[arr]);
 printf("Dequeuing element %d",dequeue[arr]);
 printf("Dequeuing element %d",dequeue[arr]);
 enqueue(&q,45);
 enqueue(&q,56);
 enqueue(&q,54);
  if Full(q)
  {
printf("Queue is full");
  }
  if Empty(q )
  {
    printf("Empty queue");
  }
  return 0;

 }