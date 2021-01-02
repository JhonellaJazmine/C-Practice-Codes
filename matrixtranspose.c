//Program to Find the Transpose of a Matrix

#include<stdio.h>

int main()
{
    int rows, columns;                  //declaration of variables

    printf("Enter number of rows: ");
    scanf("%d",&rows);                      //ask and get user input for row/s of matrix
    printf("Enter number of columns: ");
    scanf("%d",&columns);                   //ask and get user input for column/s of matrix

    int matrix[rows][columns];              //declaration of 2d array / matrix

    printf("Enter element of matrix... \n");

    for(int i=0; i<rows; i++)               //loop for getting content of matrix
    {
        for(int j=0; j<columns; j++)
        {
            printf("matrix[%d][%d]: ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nEntered matrix... \n");

    for(int i=0; i<rows; i++)               //loop for displaying content of the matrix
    {
        for(int j=0; j<columns; j++)
        {
            printf("%d  ",matrix[i][j]);
        }
        printf("\n");
    }

    int trans_rows=columns, trans_col=rows;
    int transpose[trans_rows][trans_col];

    for(int i=0; i<trans_rows; i++)         //loop for transposing the matrix
    {
        for(int j=0; j<trans_col; j++)
        {
            transpose[i][j]=matrix[j][i];
        }
    }
printf("\nTransposed matrix... \n");        //loop for displaying the transposed matrix
    for(int i=0; i<trans_rows; i++)
    {
        for(int j=0; j<trans_col; j++)
        {
               printf("%d  ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;       //exits program
}
