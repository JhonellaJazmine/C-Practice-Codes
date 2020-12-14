// Write a program in C to display the multiplication table vertically from 1 to n.
#include <stdio.h>

int main()
{
    //declaration of variables
    int nth,multiple;

    printf("Input up to the table number starting from 1: ");  //prompts user to input a number
    scanf("%d",&nth);                     //gets a number input from user

    for(int i=0;i<nth;i++)                                    //loop for printing multiplication table from 1 up to integer input
    {
        for(int j=0;j<nth;j++){                               //for display multiplication table of i+1
        multiple=(i+1)*(j+1);
        printf("%dx%d = %d  ",i+1,j+1,multiple);        //prints multiples for multiplication table
        }
        printf("\n");
    }

}
