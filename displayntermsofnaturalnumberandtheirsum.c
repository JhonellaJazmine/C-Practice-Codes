//Write a program in C to display n terms of natural number and their sum.

#include <stdio.h>

int main()
{
  int n,sum=0;

  printf("nth term: ");             //prompts user to input nth term
  scanf("%d",&n);                   //gets user nth term

  printf("The first %d natural number is : ",n);        

  for(int i=0;i<n;i++)
  {
    printf("%d ",i+1);              //display numbers from 1 up to nth term
    sum+=i+1;                       //adds number from 1 to nth term to variable sum
  }
  printf("\n");
  printf("The Sum of Natural Number up to %d terms : %d",n,sum);            //displays sum of natural numbers from 1 to nth term
}
