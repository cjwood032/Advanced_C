#include <stdlib.h>
#include <stdio.h>
struct Node
{
    int key;
    struct Node* next;
};
struct Queue{
    struct Node *front, *rear;
};

struct Node* newNode(int data)
{
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->key = data;
    temp->next = NULL;
    return temp;
}
struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Node));
    q->front=q->rear=NULL;
    return q;
}
void enQueue(struct Queue* q, int k)
{
    struct Node* temp = newNode(k);
    if(q->rear==NULL)
    {
        q->front=q->rear = temp;
        return;
    }
    q->rear->next=temp;
    q->rear=temp;
}
struct Node* deQueue(struct Queue* q)
{
    if(q->front==NULL)
    {
        return NULL;
    }
    struct Node* temp=q->front;
    q->front=q->front->next;
    if(q->front==NULL)
    {
        q->rear=NULL;
    }
    return temp;
}
int main()
{
    struct Queue* q = createQueue();
    enQueue(q,1);
    enQueue(q,2);
    deQueue(q);
    deQueue(q);
    enQueue(q,3);
    enQueue(q,4);
    enQueue(q,5);
    struct Node* n =deQueue(q);
    if(n!=NULL)
    {
        printf("Dequeued item is %d\n", n->key);
    }
    return 0;
}