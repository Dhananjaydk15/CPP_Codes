/* Using cricket, declare an array player with 50 elements and write a C program to read the
information about all the 50 players and print team-wise list containing names of players with
their batting average. */
#include<stdio.h>
#include "clean.h"
void setdata(struct cricket *p);
void getdata(struct cricket *p);
struct cricket
{
    char p_name[20],t_name[20];
    float b_avr;
}player[50];
int main(){
    printf("\n\t* Fill The information :- ");
    for(int i = 0 ; i < 50 ; i++){
        printf("\n\t* Player %d :\n",i+1);
        setdata(&player[i]);
    }
    printf("\n\t* Display Information : \n");
    for (int i = 0; i < 50; i++)
    {
        printf("\n\t* Player %d",i+1);
        getdata(&player[i]);
        printf("\n");
    }
return 0;
}
void setdata(struct cricket *p)
{
    printf("\t* Enter Name of Player : ");
    scanf("%[^\n]s",p->p_name);
    printf("\t* Enter Team Name : ");
    scanf("%s",p->t_name);
    printf("\t* Enter Average : ");
    scanf("%f",&p->b_avr);
    clean_stdin(); 

}
void getdata(struct cricket *p)
{
    printf("\t* Name of Player :- %s   ",p->p_name);
    printf("\t* Team :- %s",p->t_name);
    printf("\t* Batting Average :- %.2f",p->b_avr);
}