//Find the Largest Element in an array

#include <stdio.h>

int main()
{
    int n;
    float largest=0;

    printf("Enter number of elements: ");
    scanf("%d",&n);                     //gets number of elements in the array from user

    float arr[n];                       //declaration of float array
    printf("Enter numbers...\n");

    for (int i=0; i<n; i++)             //loop for getting contents of the array
    {
        printf("%d.) ",i+1);
        scanf("%f",&arr[i]);
    }

    for(int i=0; i<n; i++)              //loop for determining largest number in the array
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }

    }

    printf("The largest element in the array is %.2f",largest);     //print out largest number in the array

    return 0;       //exit program

}
