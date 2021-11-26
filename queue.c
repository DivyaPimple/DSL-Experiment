#include <stdio.h>
#include <conio.h>
#include <process.h>
int x[30], front = -1, rear = -1;
void PUSH()
{
  if (rear == 29)
  {
    printf("\n\n OVERFLOW");
    return;
  }
     if (front == -1)
     {
         front = 0;
     }
       rear ++;
       printf("\n\n Enter any num : ");
       scanf("%d" , &x[rear]);
}
void DISP()
{
   int i;
   if (front == -1)
   {
     printf("\n\n QUEUE IS EMPTY!");
   }
   else
   {
    for (i=front ; i<=rear ; i++)
    {
        printf("\n\n %d" , x[i]);
    }
   }
}
void PEEK()
{
  if (front == -1)
  {
   printf("\n\n QUEUE IS EMPTY!");

  }
  else
  {
    printf("\n\n PEEK => %d", x[front]);

  }
}
void POP()
{
     if (front == -1)
     {
        printf("\n\n QUEUE IS EMPTY!");

     }
     else
     {

         x[front] = 0;
         front ++;
     }
      if (front == rear +1)
      {
          front = rear = -1;
      }

}
int menu()
{
    int choice;
    printf("\n\n 1.PUSH");
    printf("\n\n 2.DISP");
    printf("\n\n 3.POP");
    printf("\n\n 4.PEEK");
    printf("\n\n 5.EXIT");
        printf("\n\n Enter choice : ");
        scanf("%d" , &choice);
          return choice;
}
  void main ()
  {
      int ch ;
      do
      {
          ch = menu();
          switch (ch)
          {

       case 1:
             PUSH();
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
             break;
       case 5:
            printf("\n\n EXIT ");
            getch();
            exit(0);
       default :
            printf("\n\n  INVALID INPUT ");
          }
          getch();
      }while(ch!=5);

  }




