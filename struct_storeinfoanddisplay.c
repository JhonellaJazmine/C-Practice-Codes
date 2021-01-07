#include <stdio.h>

typedef struct Student
{
    char name[50];
    int number;
    float grade;

}student_info;

int main()
{
    student_info student;

    //for getting user inputs
    printf("Enter student's name: ");
    fgets(student.name,sizeof(student.name),stdin);
    printf("Enter student's number: ");
    scanf("%d",&student.number);
    printf("Enter student's grade: ");
    scanf("%f",&student.grade);

    //for displaying
    printf("\nSTUDENT'S INFO");
    printf("\nName of Student: %s",student.name);
    printf("Student Number: %d\n",student.number);
    printf("Grade: %.2f",student.grade);

    return 0;

}
