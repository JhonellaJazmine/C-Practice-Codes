//C Program to Add Two Matrices Using Multi-dimensional Arrays

#include <stdio.h>

int main()
{
    int rows, columns;

    printf("Enter number of rows: ");           //gets number of rows for the 2 matrix from the user
    scanf("%d",&rows);
    printf("Enter number of columns: ");        //gets number of columns for the 2 matrix from the user
    scanf("%d",&columns);

    int matrixA[rows][columns], matrixB[rows][columns];     //declaration of 2d arrays for 2 matrices

    for(int i=0; i<rows; i++)                   //loop for getting content of matrixA
    {
        for(int j=0; j<columns; j++)
        {
            printf("A[%d][%d] = ",i+1,j+1);
            scanf("%d",&matrixA[i][j]);
        }
    }
    for(int i=0; i<rows; i++)                //loop for getting content of matrixB
    {
        for(int j=0; j<columns; j++)
        {
            printf("B[%d][%d] = ",i+1,j+1);
            scanf("%d",&matrixB[i][j]);
        }
    }

    printf("The sum of the two matrices...\n\n");

    for(int i=0; i<rows; i++)                //loop for displaying sum of matrixA and matrixB
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d  ",matrixA[i][j]+matrixB[i][j]);
        }
        printf("\n");
    }

    return 0;

}
