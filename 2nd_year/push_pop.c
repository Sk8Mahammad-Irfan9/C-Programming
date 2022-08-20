#include <stdio.h>
#include <stdlib.h>
#define MAX 6
int queue[MAX];
int front = 0;
int rear = 0;
void Dispaly()
{
    int i;
    if (front == rear)
    {
        printf("\nEmpty queue");
        return;
    }
    else
    {
        printf("\nElement in queue: \n");
        printf("\n");
        for ( i = front; i <= rear-1; i++)
        {
            printf("| %d |", queue[i]);
            
        }
    }
}
void Delete()
{
    if (front == 0 && rear == 0)
    {
        printf("\n QUEUE IS UNDERFLOW");
        {
            return;
        }
    }
    else
    {
        printf("\npopped element is: %d ", queue[front]);
        front = front + 1;
    }
}
void Insert()
{
    int data;
    if (rear == MAX)
    {
        printf("\nqueue is Overflow");
        return;
    }
    else
    {
        printf("\nEnter data: ");
        scanf("%d", &data);
        queue[rear] = data;
        rear = rear + 1;
        printf("\nData stored in queue");
    }
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n.....Queue operation using Array.....\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            Insert();
            break;
        case 2:
            Delete();
            break;
        case 3:
            Dispaly();
            break;
        case 4:
            exit(0);
            break;

        default:printf("Choose 1, 2, 3, 4 options!!");
            break;
        }
    }
    return 0;
}