// Write a program in C to display the pattern like right angle triangle using an asterisk.
#include <stdio.h>

int main()
{
    for(int i=0;i<4;i++){             //loop for printing right angle triangle
        for(int j=0;j<i+1;j++)        //loop for printing asterisk in a line
        {
            printf("*");            
        }
        printf("\n");          //prints new line      
    }
}
