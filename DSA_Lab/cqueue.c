#include <stdio.h>
#include <stdlib.h>

#define size 10             // defined MAX size of queue

int qarr[size],front=-1, rear=-1;       // set value of front and end

void insert(int qarr[],int s)           // insert function
{
    if((front==0 && rear==size-1) || front==rear+1)  // if queue is really full like fr full 2 conditions
    {
        printf("Queue Overflow");
        return;
    }

    else if(rear==-1)           // probably the first run of program when rear is at initial position 
    {
        front++; rear++;
    }

    else if(rear==size-1 && front>0)        // what if i deleted an element and rear is still at full so checking
    rear=0;                              // if true: insertion will happen at index 0 of queue if rear was maxed out and space was available at start
    else
    rear++;                             // if not rear keeps increasing normally :-)

    qarr[rear]=s;       //  after rear value is achieved we push value of n to qarr at index rear
}

void delete(int qarr[])     // delete function defination
{
    if(front==-1)       // if you popped all the elements or chose delete at step 1 of running 
    printf("Queue is Empty.");
    else if(front==rear)   // if queue has only one element? not sure tho    
    {
        printf("\n %d deleted", qarr[front]);
        front =  - 1;
        rear =  - 1;
    }

    else        // normal deletion = front=front+1;
    {
        printf("\n %d deleted", qarr[front]);
        front++;
    }
}

void display(int qarr[])        // little complicated display/print func
{
    int i;          // for "for loop"
    printf("\n");           // Output needs good looks for good books;
    if (front > rear)       // if maxed reached and rear became 0 atleast once then 2 loops needed
    {
        for (i = front; i < size; i++)
        {
            printf("%d ", qarr[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d ", qarr[i]);
    }
    else            // normal printing if overflow wasnt reached
    {
        for (i = front; i <= rear; i++)
            printf("%d ", qarr[i]);
    }
}

int main()
{
    int ch,i,n;
    while(1)                    // started a infinite loop to avoid using do while but plot twist is that it is manually breaked in case 4
    {
        printf("\nEnter your choice to perform on the queue\n1. Insertion\n2. Deletion\n3. Display the currect elements\n4. Exit\n\n= ");
        scanf("%d",&ch);
        
        switch(ch)          // invoking operations using switch case :_)
        {
            case 1: 
                    printf("Enter Value: "); scanf("%d",&n);
                    insert(qarr,n); break;
            
            case 2: delete(qarr); break;
            
            case 3: display(qarr); break;
            
            case 4: exit(0); break;             // exit fun defined in stdlib.h
            
            default: printf("\nInvalid Imput! Try again"); break;

        }

    } return 0;             // returned my maths numbers;
}

