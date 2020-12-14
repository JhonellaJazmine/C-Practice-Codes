//Write a program in C to read 10 numbers from keyboard and find their sum and average.

#include <stdio.h>

int main()
{
  //declaration of variables
  int num,sum=0;
  float average=0;

  printf("Input 10 numbers...\n");    //prompts user to input 10 variables

  for(int i=0;i<10;i++)
  {
      printf("%d.) ",i+1);          //prints numbering
      scanf("%d",&num);             //gets user number input
      sum+=num;                     //add user input to the value of sum
  }

  average=sum/10;                   //compute the average of the 10 number inputs

  printf("The sum of 10 numbers is : %d\n",sum);      //displays sum
  printf("The Average is : %f",average);            //displays average

}
