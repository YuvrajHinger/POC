#include<stdio.h>
#include<conio.h>
#define max 5
void enqueue(int *a,int front,int rear,int data);
int main()
{
    int n,front=-1,rear=-1,data,a[max];
    while(1)
    {
      printf("\n 1.enqueue \n 2.dequeue \n 3.trvaerse");
      scanf("%d",&n);
        switch(n)
        { case 1: printf("enter data");
                  scanf("%d",&data);
                  enqueue(a,front,rear,data); break;
                  default: printf("invalid");
        }    
    }
    getch();
}
void enqueue(int *a, int front, int rear, int data)
{       if((rear==max-1 && front==-1) || (rear==front-1))
        { printf("queue is overflow"); }
        else if(rear==max-1)
        { rear=0;   a[rear]=data;   }
        else
        { rear++; a[rear]=data; }
}
