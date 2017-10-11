#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 5

struct stack
{
   int stk[MAXSIZE];
   int top;
};
typedef struct stack STACK;
STACK s;

void push(void);
int pop(void);
void display(void);

int main ()
{
   int choice;
   int option = 1;
   s.top = -1;

   printf ("STACK OPERATION\n"); /*менюшка*/
   while (option)
   {
      printf (" 1 PUSH \n"); /*добавить число*/
      printf (" 2 POP \n"); /*вывод*/
      printf (" 3 DISPLAY \n"); /*показать весь стек*/
      printf (" 4 EXIT \n"); 

      printf ("Enter your choice\n");
      scanf ("%d", &choice);
      switch (choice)
      {
          case 1:
          push();
          break;

          case 2:
          pop();
          break;

          case 3:
          display();
          break;

          default:
          return 0;
      }

   fflush (stdin); /*буфер*/
   printf ("           Continue?\n   (Type yes (1) or not (0))?\n");
   scanf ("%d", &option);
   }
return 0;
}

void push () /*добавление*/
{
   int num;
   if (s.top == (MAXSIZE - 1))
   {
      printf ("Stack is Full\n");
      return;
   }
else
{
   printf ("Enter the element to be pushed\n");
   scanf ("%d", &num);
   s.top = s.top + 1;
   s.stk[s.top] = num;
}
return;
}

int pop () /*вывод*/
{
   int num;
   if (s.top == - 1)
   {
      printf ("Stack is Empty\n");
      return (s.top);
   }
else
{
   num = s.stk[s.top];
   printf ("Poped element is = %d\n", s.stk[s.top]);
   s.top = s.top - 1;
}
return(num);
}

void display () /*показать*/
{
   int i;
   if (s.top == -1)
   {
      printf ("Stack is empty\n");
      return;
}
else
{
   printf ("\n The status of the stack is \n");
   for (i = s.top; i >= 0; i--)
   {
      printf ("%d", s.stk[i]);
   }
}
printf ("\n");
return 0;
}
