#include<stdio.h>
#include<stdlib.h>

typedef struct person
{
    int age;
    char name[30];
}Person;

int main()
{
    Person *ptr;
    int i, n;

    printf("Enter number of person: ");
    scanf("%d",&n);

    ptr = (Person*)malloc(sizeof(Person)*n);

    for(i=0; i<n; i++)
    {
        printf("Enter name: ");
        scanf("%s",(ptr+i)->name);
        printf("Enter age: ");
        scanf("%d",&(ptr+i)->age);
    }

    printf("     NAME\tAGE\n");
    for(i=0; i<n; i++)
    {
        printf("%d.) %s\t%d",i+1,(ptr+i)->name,(ptr+i)->age);
        printf("\n");
    }
    return 0;
}
