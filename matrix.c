#include <stdio.h>
#include <stdlib.h>

int main()
{ 
    /* m - stroki 
    n - stolbci
    part 1 */
    int m, n;
    printf("enter massive size\n");
    scanf("%d%d", &n, &m);
    printf ("\n");
    int massive [m][n];
	int i,j;
    if (m>=3, n>=4);
    {
    printf ("\n Massive\n\n");
        for (i=0; i<m; i++)
        {
            for (j=0; j<n; j++)
            {
                massive [i][j]=rand()%100+1;
                printf ("%d\t",massive [i][j]);
            }
            printf("\n");
        }
    }
    if (m<3, n<4)
        printf("Error");
    
    /* part 2 */
    printf ("\n Switching\n");
      for( j = 0; j < n; j++) 
      {
        int ch = massive[0][j];
        massive[0][j] = massive[m - 1][j];
        massive[m - 1][j] = ch;
    }

    for ( i = 0; i < n/2; i++) {
        int ch;
        ch = massive[0][i];
        massive[0][i] = massive[0][n - 1 - i];
        massive[0][n - 1 - i] = ch;

        ch = massive[m - 1][i];
        massive[m - 1][i] = massive[m - 1][n - 1 - i];
        massive[m - 1][n - 1 - i] = ch;

    }

    printf("\n   \n");

    for ( i = 0; i < m; i++) {
        for (j = 0; j < n; j++){
            printf("%d\t ",massive[i][j]);
        }
        printf("\n");
    }
    getchar();
        
   /*Part 3*/
   for(j=0;j<n;j++) 
   {
      printf ("\n Deleting\n\n");
      int newmas[m-1][n-1]; /*new massive*/
      int xi=0;
      int xj=0;
      for(i=0;i<m-1;i++)
      {
         for(j=0;j<n-1;j++)
         {
             xi=1;
             xj=1;
             newmas[i][j]=massive[i+xi][j+xj];
             printf("%4d ", newmas[i][j]);
          }
          printf("\n");
       }
   }
    printf("\n");
 
 /*Part 4*/
    
    
    
    return 0;
