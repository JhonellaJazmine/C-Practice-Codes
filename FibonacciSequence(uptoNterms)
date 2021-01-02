//Fibonacci Series up to n terms

#include <stdio.h>

int main()
{
    int first_term=0,second_term=1,next_term=0,n;

    printf("Enter number of terms: ");     //gets number of terms of user
    scanf("%d",&n);

    //prints first and second term 0 and 1
    printf("Fibonacci Sequence: %d  %d  ",first_term,second_term);


    for(int i=0;i<n-2;i++)  //loop for printing next terms up to n
    {
        next_term=first_term+second_term;   //formula for the next term
        printf("%d  ",next_term);       //prints next term
        first_term=second_term;         //stores second_term to first_term
        second_term=next_term;          //stores next_term to second_term
    }

    return 0;   //exit program
}
