#include <stdio.h>

struct Distance
{
    int feet;
    float inches;
}distance1,distance2,sum; //or struct Distance distance1, distance2, sum;

int main()
{
    printf("Input 1st Distance... \n");
    printf("Feet: ");
    scanf("%d",&distance1.feet);
    printf("Inches: ");
    scanf("%f",&distance1.inches);

    printf("Input 2nd Distance... \n");
    printf("Feet: ");
    scanf("%d",&distance2.feet);
    printf("Inches: ");
    scanf("%f",&distance2.inches);

    sum.inches = distance1.inches + distance2.inches;
    while(sum.inches>=12)
    {
        sum.feet++;
        sum.inches-=12;
    }
    sum.feet += distance1.feet + distance2.feet;

    printf("The sum of the two distance is...\nFeet: %d\nInches: %.1f",sum.feet,sum.inches);

    return 0;

}
