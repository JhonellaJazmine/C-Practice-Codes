// Write a program in C to display the pattern like right angle triangle with a number.
#include <stdio.h>

int main()
{
    for(int i=0;i<4;i++){             //loop for printing right angle triangle
        for(int j=0;j<i+1;j++)        //loop for printing numbers in a line
        {
            printf("%d",j+1);
        }
        printf("\n");          //prints new line
    }
}
