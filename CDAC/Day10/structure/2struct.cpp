/*2. Define a structure type struct personal that would contain person name, date of joining and
salary using this structure to read this information of 5 people and print the same on screen */
#include<stdio.h>
#include"clean.h"
struct personal
{
    char date[10];
    float salary;
    char name[30];
}people[5];

int main(){
    printf("\t* Fill details of 5 people.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n\t* Person %d : ",i+1);
        printf("\n\t* Enter the name :- ");
        scanf("%[^\n]s",people[i].name);
        printf("\t* Enter the date of joining :- ");
        scanf("%s",people[i].date);
        printf("\t* Enter the salary :- ");
        scanf("%f",&people[i].salary); 
        clean_stdin();      
    }
    
    printf("\n\t*Show Details of all people : \n");
    for(int i = 0 ; i < 5 ; i++){
        printf("\n\t* Person %d : ",i+1);
        printf("\n\t* Name :- %s",people[i].name);
        printf("\n\t* Date of joining :- %s",people[i].date);
        printf("\n\t* salary :- %.2f\n",people[i].salary);
    }
return 0;
}