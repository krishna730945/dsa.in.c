#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *front=NULL;
struct Node *rear=NULL;
void Enqueue(int x)
{
    struct Node *new=(struct Node*)malloc(sizeof(struct Node));
   new->data=x;
   new->next=NULL;
   if(front==NULL )
   {
    front = rear = new;
    return;
   }
   else
   {
    rear->next=new;
    rear=new;
   }
}
int Dequeue()
{
    int y = -1;
    struct Node * p;
    if(front==NULL)
    {
        printf("Queue is empty\n");
        return y;
    }
    else
    {
        p=front;
       front=front->next;
       y=p->data;
         free(p);
         p = NULL;
    }
    return y;
}
int main()
{
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    printf("Deleted element is %d\n",Dequeue());
    printf("Deleted element is %d\n",Dequeue());
    Enqueue(25);
    return 0;
}