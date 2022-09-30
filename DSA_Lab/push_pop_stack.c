#include <stdio.h>
#include <stdlib.h>
#define size 12

int stack[size],top=-1;

void push();
void pop();
void printer();

int main()
{   int ch;
    
    while(1){
        printf("\n\nEnter your choice of operation:\n1. Push\n2. Pop\n3. Print\n4. Exit\nEnter your choice: ");
        scanf("%d",&ch);

        switch(ch)
        {   case 1: push(); break;
            case 2: pop();  break;
            case 3: printer();  break;
            case 4: printf("Exiting...done");
                    exit(0); break;
           
            default: printf("Invalid Input! Try Again.");
        }}}

void push(){
    int p;
    if(top==size-1)
    {printf("Overflow!");}
    else {
        printf("\nEnter element to be pushed into the stack: ");
    scanf("%d",&p);
        top=top+1;
        stack[top]=p;}}

void pop(){
    if(top==-1)
    {printf("Underflow!");}
    else{
        printf("element popped = %d",stack[top]);
        top=top-1;}}

void printer(){
    int i;
    if(top==-1)
    {printf("Stack is Empty\n");}
    else{
    printf("Elements present currently in stack are: \n");
    for(i=top;i>=0;--i)
    {
        printf("%d\n",stack[i]);}
    }}