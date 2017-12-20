#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXLINES 10
#define MINLINES 3
#define MAXCOLUMNS 10
#define MINCOLUMNS 3
#define LEFTBORDER 0
#define RIGHTBORDER 100

    
  int main()
{
    /*Part 1 Random matrix*/

    int m, n;
	 /* m - lines 
    n - columns
    part 1 */
    srand(time(NULL));
    n = rand() % (MAXCOLUMNS-MINCOLUMNS+1) + MINCOLUMNS; 
    m = rand()%(MAXLINES-MINLINES+1) + MINLINES; 
    int massive[m][n];
    int i;
    int j;
    printf("\n Creating\n\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d\t ", massive[i][j] = rand() %(RIGHTBORDER-LEFTBORDER+1) + LEFTBORDER); 
        printf("\n");
    }
    
    /* part 2 Switch lines*/
    printf ("\n Switching\n");
      for( j = 0; j < n; j++) 
	  {
        int ch = massive[0][j];
        massive[0][j] = massive[m - 1][j];
        massive[m - 1][j] = ch;
    }

    for ( i = 0; i < n/2; i++)
	 {
        int ch;
        ch = massive[0][i];
        massive[0][i] = massive[0][n - 1 - i];
        massive[0][n - 1 - i] = ch;

        ch = massive[m - 1][i];
        massive[m - 1][i] = massive[m - 1][n - 1 - i];
        massive[m - 1][n - 1 - i] = ch;

    }

    printf("\n   \n");

    for ( i = 0; i < m; i++) 
	{
        for (j = 0; j < n; j++)
		{
            printf("%4d\t ",massive[i][j]);
        }
        printf("\n"); 
    }

     /*Part 3 Deleting*/
        for(j=0;j<n;j++) 
		{
			printf ("\n Deleting\n\n");
    int del_mas[m-1][n-1]; /*new massive*/
    int xi=0;
    int xj=0;
    for(i=0;i<m-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
                xi=1;
                xj=1;
            del_mas[i][j]=massive[i+xi][j+xj];
            printf("%d\t", del_mas[i][j]);
        }
            printf("\n");
    }

    printf("\n");
   
   
 /*Pqrt 4 New user matrix*/
    
    printf ("\n New\n\n");
    int user_matrix;
    printf("Enter number of columns");
    scanf("%d", &user_matrix);
    int g[n-1][user_matrix];

    for(i = 0; i < n - 1; i ++)
    for(j = 0; j < user_matrix; j ++)
        {
            g[i][j] = 0;
        }
    printf("new array's size = [%d][%d]\n", n - 1, user_matrix);
    for(i = 0; i < n - 1; i ++)
        {
            for(j = 0; j < user_matrix; j ++)
           {
               printf("fill in with numbers >");
               scanf("%d", &g[i][j]);
            }
        printf("\n");
    }

    int end;
    int sum = 0;
    printf("\n_________________________________\n");

    for (i=0;i < m-1;i++) 
    printf ("\n Multiplying\n\n");
    
 /*multiply matrixs*/
    {
        for (j=0;j < user_matrix;j++)
        {
            for (end=0;end < n - 1;end++)
            {
                  sum+=del_mas[i][j]*g[end][j];
            }
        printf("%d\t",sum);
        sum = 0;
    }
    printf("\n");
    }

    return 0;
   }
}
