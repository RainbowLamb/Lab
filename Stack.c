#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 5

struct stack
{
   int stk[MAXSIZE];
   int boop;
};
typedef struct stack STACK;
STACK st;

void push(void);
int pop(void);
void display(void);

int main ()
{
   int choice;
   int option = 1;
   st.boop = -1;

   printf ("STACK OPERATION\n"); /*менюшка*/
   while (option)
   {
      printf (" 1 Push \n"); /*добавить число*/
      printf (" 2 Pop \n"); /*вывод*/
      printf (" 3 Display \n"); /*показать весь стек*/
      printf (" 4 Exit \n"); 

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
   if (st.boop == (MAXSIZE - 1))
   {
      printf ("Stack is Full\n");
      return;
   }
else
{
   printf ("Enter the element to be pushed\n");
   scanf ("%d", &num);
   st.boop = st.boop + 1;
   st.stk[st.boop] = num;
}
return;
}

int pop () /*вывод*/
{
   int num;
   if (st.boop == - 1)
   {
      printf ("Stack is Empty\n");
      return (st.boop);
   }
else
{
   num = st.stk[st.boop];
   printf ("Poped element is = %d\n", st.stk[st.boop]);
   st.boop = st.boop - 1;
}
return(num);
}

void display () /*показать*/
{
   int i;
   if (st.boop == -1)
   {
      printf ("Stack is empty\n");
      return;
}
else
{
   printf ("\n The status of the stack is \n");
   for (i = st.boop; i >= 0; i--)
   {
      printf ("%d", st.stk[i]);
   }
}
printf ("\n");
return 0;
}
