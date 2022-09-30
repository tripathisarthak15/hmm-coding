#include <stdio.h>
#include <stdlib.h>
#inlc


#define MAX 50

void insert();
void display(); 
void del();
int queue_array[MAX];
int i,rear=-1; 
int front=-1;
int main()
{
int ch;
while (1)
{
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break; 
case 2:
del();
break;
case 3:
display();
break;
case 4:
exit(0);
break; 
default:
printf("WRONG\n");
}
}
}
void insert()
{
int add_item;
if(rear==MAX-1)
printf("QUEUE OVERFLOW!!!!");
else
{
if(front==-1)
front=0;
printf("Insert values: ");
scanf("%d",&add_item);
rear=rear+1;
queue_array[rear]=add_item;
}
}
void del()
{
if(front-1||front>rear)
{
printf("QUEUE UNDERFLOW!!");

}
else{
printf("element deleted is:%d\n",queue_array[front]);
printf("\n");
front=front+1;
}
}
void display()
{
if(front==-1)
printf("EMPTY!!\n");
else{
printf("QUEUE is: ");
for (i=front;i<rear;i++)
printf("%d", queue_array[i]);
printf("\n");


}
}