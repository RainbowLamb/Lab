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
      for( j = 0; j < n; j++) {
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
    return 0;


}
