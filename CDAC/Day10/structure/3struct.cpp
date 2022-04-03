/*3. Define structure data type called time_struct containing three member’s integer hour, integer
minute and integer second. Develop a program that would assign values to the individual
number and display the time in the following format: 16: 40:51 */ 
#include<stdio.h>
void time_format(struct time_struct *p);
struct time_struct
{
    int hour, minute, second;
};

int main(){
    struct time_struct time;
    struct time_struct *t = &time; 
    printf("\n\t* Enter hour : ");
    scanf("%d",&time.hour);
    printf("\t* Enter minute : ");
    scanf("%d",&time.minute);
    printf("\t* Enter second : ");
    scanf("%d",&time.second);

    time_format(t);
return 0;
}
void time_format(struct time_struct *p)
{
    if(p->hour<24&&p->minute<60&&p->second<60){
    printf("\n\t* Time in format(hr: m: s) :-> ");    
    printf("%d: %d: %d",p->hour,p->minute,p->second);
    }
    else
    printf("\t* Wrong time :");
}
