// Write a program in C to display the multiplication table of a given integer.
#include <stdio.h>

int main()
{
    //declaration of variables
    int n,multiple;

    printf("Input the number (Table to be calculated) : ");  //prompts user to input a number
    scanf("%d",&n);                     //gets a number input from user


    printf("\nMultiplication table of %d\n\n",n);
    for(int i=0;i<10;i++)                                    //loop for printing and displaying multiplication table of integer input
    {
        multiple=n*(i+1);
        printf("%d X %d = %d\n",n,i+1,multiple);        //prints multiples for multiplication table
    }

}
