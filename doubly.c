#include <stdio.h>
#include <stdlib.h>
#include <process.h>
struct node
{
    int num;
    struct node *prev;
    struct node *next;
}*start = NULL;
void CREATE();
void DISP();
void INSERT_AFTER();
void INSERT_END();
void DELETE_GIVEN();
void DELETE_FIRST();
int menu()
{
    int choice;
    printf("\n\n 1.CREATE LINKED LIST");
    printf("\n\n 2.DISP LINKED LIST");
    printf("\n\n 3.INSERT_AFTER");
    printf("\n\n 4.INSERT_END");
    printf("\n\n 5.DELETE_GIVEN");
    printf("\n\n 6.DELETE_FIRST");
    printf("\n\n 7.EXIT");
}
void main ()
{
    int ch;
    do
    {
      switch (ch)
       {
       case 1 :
             CREATE();
             DISP();
             break;

       case 2 :
            DISP();
            break;
       case 3 :
           INSERT_AFTER();
           DISP();
           break;
       case 4 :
           INSERT_END();
           DISP();
           break;
       case 5 :
           DELETE_FIRST();
           DISP();
           break;
       case 6 :
           DELETE_GIVEN();
           DISP();
           break;
       case 7 :
           printf("\n\n EXIT");
           getch();
           exit(0);
       default :
        printf("\n\n INVALID INPUT");
       }
       getch();
    }while(ch != 7);
}
void CREATE()
{
    struct node *newnode , *temp;
    newnode = malloc(size of (struct node));
    printf("\n\n Enter num :");
    scanf("%d" , &newnode->num);
    newnode->next = NULL;
    if (start == NULL)
    {
        start = newnode;
        start->prev = NULL;
    }
    else
    {
        temp = start ;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void DISP()
{
    struct node *temp;
    if (start == NULL)
    {
        printf("\n\n NO LINKED LIST");
    }
    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("\n\n %d", temp->num);
              temp = temp->next;
        }

    }
}
void INSERT_AFTER()
{
    int tnum;
    struct node *newnode, *temp;
    printf("\n\n Enter target number : ");
    scanf("%d", &tnum);
    temp = start;
    while (temp != NULL && temp->num != tnum)
     {
         temp = temp->next;
     }
     if (temp == NULL)
     {
         printf("\n\n Target number not found");
     }
     else
     {
         newnode = malloc(size of (struct node));
         printf("\n\n Enter num :");
         scanf("%d", &newnode->num);
         newnode->next = temp->next;
         newnode->prev = temp;
         temp->next->prev = newnode;
         temp->next = newnode;
     }
}
