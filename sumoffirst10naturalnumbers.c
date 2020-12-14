//Write a C program to find the sum of first 10 natural numbers.
#include <stdio.h>

int main()
{
    int sum=0;              //initializes sum to 0

    for(int i=0;i<10;i++)   //loop for adding numbers from 1-10 to variable sum
    {
        sum+=i+1;
    }

    printf("%d",sum);   //displays sum of the first 10 natural numbers

}
