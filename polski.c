 #include <stdio.h>
 #include <stdlib.h>
 #define MAXSIZE 200
 
 int main()
 {
     double stack[MAXSIZE];  
     int top =0; 
     while ( !feof(stdin) ) 
	 {
         int s = getchar();
         int x;
         switch (s) 
		 {
             case  ' ':
             case '\n':
                 break;
                 
             case '=':
                 printf("Result = %.2f\n", stack[top - 1]); top--;
                 break;
                 
             case '+':
                stack[top-2]=stack[top-2]+stack[top-1]; top--;
                break;
                
             case '-':
                stack[top-2]=stack[top-2]-stack[top-1]; top--;
                break;
                
             case '*':
                stack[top-2]=stack[top-1]*stack[top-2]; top--;
                break;
                
             case '/':
               stack[top-2]=stack[top-2]/stack[top-1]; top--;
                break;
            
             default:
                 ungetc (s, stdin);
                 if (scanf("%d", &x) != 1) 
				 {
                     fprintf(stderr, "Error, incorrect \n");
                     return -1;
                 } 
				 else 
				 {
                     stack[top] = x; top++;
                 }
         }
     }
     printf("Result = %.2f\n",stack[top-1]);
     return 0;
 }
