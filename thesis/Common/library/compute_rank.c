#include "compute_rank.h"

int compute_rank(int A)
{
    int n = sizeof(A)
    int i,j,k;
    for(j=1; j<=n; j++) /* loop for the generation of upper triangular matrix*/
    {
        for(i=1; i<=n; i++)
        {
            if(i>j)
            {
                c=A[i][j]/A[j][j];
                for(k=1; k<=n+1; k++)
                {
                    A[i][k]=A[i][k]-c*A[j][k];
                }
            }
        }
    }
    x[n]=A[n][n+1]/A[n][n];
    /* this loop is for backward substitution*/
    for(i=n-1; i>=1; i--)
    {
        sum=0;
        for(j=i+1; j<=n; j++)
        {
            sum=sum+A[i][j]*x[j];
        }
        x[i]=(A[i][n+1]-sum)/A[i][i];
    }
    for(i=1; i<=n; i++)
    {
        if(x[i] = !x[i])    // vero solo se è NaN!
        {
            //rank is not maximum
            //call a function to get a different matrix and call again this fucntion
        }
        else
        {
            printf("Rank is maximum so the matrix is singular");
            return A;
        }
    }
}