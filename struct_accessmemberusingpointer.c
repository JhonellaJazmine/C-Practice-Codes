#include<stdio.h>

typedef struct person
{
    int age;
    float weight;

}Person;

int main()
{
    Person *personPtr, person1;
    personPtr = &person1;

    printf("Enter Age: ");
    scanf("%d",&personPtr->age);

    printf("Enter Weight: ");
    scanf("%f",&personPtr->weight);

    printf("Person's Info...\n");
    printf("Age: %d\n",(*personPtr).age);
    printf("Weight: %.2f\n",personPtr->weight);

    return 0;
}
