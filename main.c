#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int x[30], top = -1;
void PUSH();
void DISP();
void POP();
void PEEK();
int menu ()
{
  int choice ;
  printf("\n\n 1.PUSH");
  printf("\n\n 2.DISP");
  printf("\n\n 3.POP");
  printf("\n\n 4.PEEK");
  printf("\n\n 5.EXIT");
      printf("\n\n Enter your choice : ");
      scanf("%d" , &choice);
  return choice;
}
 void main ()
 {
     int ch;
     do
     {
         ch = menu();
        switch (ch)
        {
        case 1:
               PUSH ();
               DISP();
               break;
        case 2:
              DISP();
              break;
        case 3:
              POP();
              DISP();
              break;
        case 4:
             PEEK();
             DISP();
             break;
        case 5:
             printf("\n\n EXIT ");
             getch();
             exit(0);
        default :
              printf("\n\n INVALID INPUT ");
        }
         getch();
     }while(ch!=5);
 }
   void PUSH()
   {
     if (top == 29)
     {
         printf("\n\n OVERFLOW!");
           return ;
     }
       top ++;
       printf("\n\n Enter any num : ");
         scanf("%d" , &x[top]);
   }
    void DISP ()
    {
        int i;
        if (top == -1)
        {
            printf("\n\n STACK IS EMPTY!");
        }
        else
        {
            for (i=top;i>=0;i--)
            {
                printf("\n\n %d" , x[i]);
            }
        }
    }
     void POP()
     {
         if (top == -1)
         {
             printf("\n\n STACK IS EMPTY!");
         }
         else
         {
             x[top] = 0;
             top--;
         }
     }
     void PEEK()
     {
         if (top == -1)
         {
             printf("\n\n STACK IS EMPTY!");
         }
         else
         {
             printf("\n\n PEEK => %d " , x[top]);
         }
     }
