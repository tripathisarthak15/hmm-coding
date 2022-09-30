#include <stdio.h>
#include <stdlib.h>
#define size 12

int q[size],front=-1,rear=-1;

void entry();
void del();
void printer();

int main()
{   int ch;
    
    while(1){
        
        printf("\n\nEnter your choice of operation:\n1. Enter Element\n2. Remove Element\n3. Print\n4. Exit\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {   case 1: entry(); break;
            case 2: del();  break;
            case 3: printer();  break;
            case 4: printf("Exiting...done");
                    exit(0); break;
           
            default: printf("Invalid Input! Try Again.");
        }}}

void entry(){
    int p;
    if(rear==size-1)
    {printf("Overflow!");}
    else{
        if(front==-1)
        front=0;
        printf("\nEnter element to be pushed into the queue:");
    scanf("%d",&p);
        rear=rear+1;
        q[rear]=p;}}

void del(){
    if(front==-1 || front>rear)
    {printf("Underflow!");}
    else{
        printf("element deleted = %d",q[front]);
        front=front+1;}}

void printer(){
    int i;
    if(front==-1)
    {printf("Queue is Empty\n");}
    else{
    printf("Elements present currently in queue are: \n");
    for(i=rear;i>=front;i--)
    {
        printf("%d ",q[i]);
    }}}