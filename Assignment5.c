//Task is to find out passed as well as failed students.
//Given the score of 'N' students in the class, write a program to compute the maximum score. Use array to store the marks of the students and assume that the maximum number of students
// in a class is 50. Assume that -1 is used to indicate a student who is absent for the exam. Assume that a student should secure a minimum of 50 marks to pass the exam.

#include <stdio.h>
int main()
{
    int marks[50], n, i, max, passed=0, failed=0;
    printf("Enter no. of students(max 50): ");
    scanf("%d", &n);
    printf("Enter the marks of the students:-\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    max = marks[0];
    for (i=0;i<n;i++)
    {
        if (max <= marks[i] && marks[i] != -1)
        {
            max = marks[i];
        }
    }
    for (i=0;i< n; i++) {
        if (marks[i] >= 50)
        {
            passed++;
        }
        else if (marks[i] != -1 && marks[i]<50)
        {
            failed++;
        }
    }
    printf("Maximum score: %d\n", max);
    printf("No. of passed students: %d\n", passed);
    printf("No. of failed students: %d\n", failed);
    return 0;
}

