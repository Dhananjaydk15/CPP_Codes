/* 5. Design a structure student_record to contain name, branch and total marks obtained.
Develop a program to read data for 10 students in a class and print the */
#include <stdio.h>
#include "clean.h"
void getdata(struct student_record *ptr);
void setdata(struct student_record *ptr);

struct student_record
{
    char name[30];
    char branch[10];
    int marks;
} stud[10];
int main()
{
    printf("\t* Fill Details of Student :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\n\t* Student %d :\n",i+1);
        setdata(&stud[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("\n\t* Student %d :",i+1);
        getdata(&stud[i]);
    }
    return 0;
}
void getdata(struct student_record *ptr)
{
    printf("\n\t* Name : %s", ptr->name);
    printf("\n\t* Branch : %s", ptr->branch);
    printf("\n\t* Total Marks : %d\n", ptr->marks);
}
void setdata(struct student_record *ptr)
{
    printf("\t* Enter The Name :- ");
    scanf("%[^\n]s", ptr->name);
    printf("\t* Enter The Branch :- ");
    scanf("%s", ptr->branch);
    printf("\t* Enter The Marks :- ");
    scanf("%d", &ptr->marks);
    clean_stdin();
}
