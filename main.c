#include <stdio.h>
#include <stdlib.h> //For rand()
#include <time.h> //For time

int main()
{
    const int n=3;
    int i,j,k;

    int A[n][n];
    int B[n][n];
    int C[n][n];

    srand(time(NULL));
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10; //Filling the matrix "A" with random numbers from 0 to 9
            B[i][j] = rand() % 10; //Filling the matrix "B" with random numbers from 0 to 9
        }
    }

// Output of matrix A and B
/*
    printf("Matrix A\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", A[i][j]);
            printf(" ");
        }

        printf("\n");
    }

    printf("Matrix B\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d", B[i][j]);
            printf(" ");
        }

        printf("\n");
    }
*/

    printf("Matrix C=AB:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            C[i][j]=0;
            for(k = 0; k < n; k++)
                C[i][j]+=A[i][k]*B[k][j];
            printf("%d", C[i][j]);
            printf(" ");
        }

        printf("\n");
    }
}