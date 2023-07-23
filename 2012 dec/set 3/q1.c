#include <stdio.h>

typedef struct student
{
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int total;
    float avg;
    char grade;
} student;

void main()
{
    char allotGrade(float avg);
    student students[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d %d %d %d %d", &students[i].s1, &students[i].s2, &students[i].s3, &students[i].s4, &students[i].s5);
        students[i].total = students[i].s1 + students[i].s2 + students[i].s3 + students[i].s4 + students[i].s5;
        students[i].avg = students[i].total / 5;
        students[i].grade = allotGrade(students[i].avg);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("Student %d\n", j+1);
        printf("Average: %.2f\n", students[j].avg);
        printf("Grade: %c\n\n", students[j].grade);
    }
    
}

char allotGrade(float avg)
{
    char grade;
    if (avg > 90)
    {
        grade = 'A';
    }

    else if (avg > 75)
    {
        grade = 'B';
    }

    else
    {
        grade = 'C';
    }

    return grade;
}