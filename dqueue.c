#include <stdio.h>
#include <conio.h>
#include<conio.h>

int x[5],size=5,front=-1,rear=-1;
int menu()
{
    int choice ;
    printf("\n\n 1.INSERT_LEFT");
    printf("\n\n 2.INSERT_RIGHT");
    printf("\n\n 3.DELETE_LEFT");
    printf("\n\n 4.DELETE_RIGHT");
    printf("\n\n 5.DISP");
    printf("\n\n 6.EXIT");
    printf("\n\n Enter your choice : ");
     scanf("%d", &choice);
     return choice;
}
void main()
{
    int ch;
    do
    {
        ch = menu();
        switch(ch)
        {
        case 1:
            INSERT_LEFT();
            DISP();
            break;
        case 2:
            INSERT_RIGHT();
            DISP();
            break;
         case 3:
            DELETE_LEFT();
            DISP();
            break;
       case 4:
            DELETE_RIGHT();
            DISP();
            break;
      case 5:
            DISP();
            break;
     case 6:
            printf("\n\n EXIT");
            getch();
            exit(0);
     default :
           printf("\n\n INVALID INPUT");
        }
        getch();
    }while(ch!=6);
}
void INSERT_LEFT()
{
    if ((front == 0 && rear == size-1) || (front == rear+1))
    {
        printf("\n\n QUEUE IS OVERFLOW");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        front --;
    }
     printf("\n\n Enter any num : ");
      scanf("%d", &x[front]);
}
void INSERT_RIGHT()
{
    if ((front == 0 && rear == size-1) || (front == rear+1))
    {
        printf("\n\n QUEUE IS OVERFLOW");
        return;
    }
    if (rear == -1)
    {
        front = 0;
    }
    if (rear = size-1)
    {
        rear = -1;
    }
      rear ++;
     printf("\n\n Enter any num : ");
      scanf("%d", &x[rear]);
}
void DELETE_LEFT()
{
    if (front == -1)
    {
        printf("\n\n QUEUE IS EMPTY");
    }
    else if (front == rear)
    {
        x[front]=0;
        front = rear = -1;
    }
    else
    {
        x[front] = 0;
        front ++;
    }
    if (front == size)
    {
        front =0;
    }
}
 void DELETE_RIGHT()
{
    if (front == -1)
    {
        printf("\n\n QUEUE IS EMPTY");
    }
     if (front == rear)
    {
        x[rear]=0;
        front = rear = -1;
    }
    else
    {
        x[rear] = 0;
        front ++;
    }
    if (front == -1)
    {
        rear = size-1;
    }
}
void DISP()
{
     int i;
    if (front == -1)
    {
        printf("\n\n QUEUE IS EMPTY");
    }
    else
    {
        printf("\n\n QUEUE : ");
        if (front <= rear)
        {
            for (i=front ; i<=rear ; i++)
            {
                printf("%d", x[i]);
            }
        }
        else
        {
          for (i=front ; i<size ; i++)
           {
                printf("%d", x[i]);
            }

          for (i=0 ; i<size ; i++)
          {
            printf("%d", x[i]);
          }
        }
    }
}




