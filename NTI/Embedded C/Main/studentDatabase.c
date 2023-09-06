#include "studentDatabase.h"
#include <stdio.h>


void getStudentName(studentType *student)
{
    char studentName[20];
    printf("Enter Studnt Name:");
    gets(studentName);
    strcpy(student->name,studentName);
}

void getStudentID(studentType *student)
{
    printf("Enter Student ID:");
    scanf("%d",&student->id);
}

void getStudentMark(studentType *student)
{
    printf("Enter Student Mark:");
    fflush(stdin);
    scanf("%c",&student->mark);
}

void studentInfo(studentType *student)
{
    getStudentName(student);
    getStudentID(student);
    getStudentMark(student);
}

void studentDisplay(studentType student)
{
    printf("student name:%s\n",student.name);
    printf("student ID:%d\n",student.id);
    printf("student mark:%c\n",student.mark);
}
