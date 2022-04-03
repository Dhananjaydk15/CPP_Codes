/*1. Write a simple structure called student containing fields
(int id, char gender and char name[size]; Create a variable of this structure(ex: std1),
fill in the fields of this structure variable and
use a pointer to std1 which changes the member values for std1.*/
#include <string.h>
#include <stdio.h>
struct student
{
    int id;
    char gender;
    char name[30];
};
int main()
{
    struct student *ptr;
    struct student head;
    ptr = &head;
    char str[30];
    printf("\t* Fill the  data of student :\n");
    printf("\t* Enter The name of student :- ");
    scanf("%[^\n]s", str);
    strcpy(ptr->name, str);
    printf("\t* Enter The id of student :- ");
    scanf("%d", &ptr->id);
    printf("\t* Enter gender of student(M/F) :- ");
    scanf(" %c", &ptr->gender);
    
    printf("\n\t* Display information:- ");
    printf("\n\t* name of sudent :- %s", ptr->name);
    printf("\n\t* id of student :- %d", ptr->id);
    printf("\n\t* gender of student :- %c", ptr->gender);
    return 0;
}