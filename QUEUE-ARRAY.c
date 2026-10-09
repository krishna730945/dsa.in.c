#include<stdio.h>
#define size 5
int Q[size];
int front=-1,rear=-1;
void Enqueue(int x)
{
    if(rear == size - 1)
    {
        printf("Queue is full\n");
    }
    else
    { rear = rear + 1;
        Q[rear] = x;
    }
        if(front==-1)
        {
            front=0;
        }
    }

void Dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Deleted element is %d\n",Q[front]);
        front = front + 1;
    }
}
int main()
{ 
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);
    Dequeue();
    Dequeue();
    Enqueue(25);
    return 0;
}
