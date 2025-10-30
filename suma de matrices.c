/*suma de matrices por renglones*/
#include <stdio.h>

int A[5][5],B[5][5],C[5][5];
int m,n,j,i;

int main    ()
{
    printf("Dale un valor a m<5\n");
    scanf("%d", &m);
    
    printf("Dale un valor a n<5\n");
    scanf("%d", &n);

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d", &A[i][j]);

        }
        
    }
    

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("B[%d][%d]",i,j);
            scanf("%d", &B[i][j]);
            
        }
        
    }

    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("[%d]\t",C[i][j]);
        }
        printf("\n");
    }
    
}