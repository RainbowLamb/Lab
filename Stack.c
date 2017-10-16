#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 15

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
   int option=1;
   st.boop=-1;

   printf ("STACK OPERATION\n"); /*menu*/
   while (option)
   {
      printf ("__________________________\n");
      printf (" 1 Push \n"); /*add number*/
      printf (" 2 Pop \n"); /*deduction*/
      printf (" 3 Display \n"); /*show the whole stack*/
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
   }
return 0;
}

void push () /*add number*/
{
   int num;
   if (st.boop==(MAXSIZE - 1))
   {
      printf ("Stack is Full\n");
      return;
   }
else
{
   printf ("+ Enter the element to be pushed +\n");
   scanf ("%d", &num);
   st.boop=st.boop+1;
   st.stk[st.boop]=num;
}
return;
}

int pop () /*deduction*/
{
   int num;
   if (st.boop==- 1)
   {
      printf ("Stack is Empty\n");
      return (st.boop);
   }
else
{
   num=st.stk[st.boop];
   printf ("- Poped element is -\n %d\n", st.stk[st.boop]);
   st.boop=st.boop-1;
}
return(num);
}

void display () /*show the whole stack*/
{
   int i;
   if (st.boop==-1)
   {
      printf ("Stack is empty\n");
      return;
}
else
{
   printf ("\n The status of the stack is \n");
   for (i=st.boop; i>=0; i--)
   {
      printf ("%d", st.stk[i]);
   }
}
printf ("\n");
return 0;
}
