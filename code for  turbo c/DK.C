#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm,i;
int  fno,sno,tno, j=1 ,sum=0  ;
long int p,k , rev=0 , no;
float ffno,sfno,tfno;
char c,ch ;
jump :
clrscr();
initgraph(&gd,&gm,"c://Turboc3//BGI");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t* Enter the Password :-  ");
/* Graphics -------------------------------------------------------------------------------------*/
setcolor(10);
rectangle(180,250,450,210);
setcolor(4);
rectangle(176,254,454,206);
/*Graphics End -----------------------------------------------------------------------------------*/
scanf("%ld",&p);
closegraph();
switch(p)
{
case 1234 :

for(i=0;i<2;i++)
{
clrscr();
//initgraph(&gd,&gm,"c://Turboc3//bgi");
initgraph(&gd,&gm,"c://Turboc3//BGI");
setcolor(i);
rectangle(10,10,200,40);
rectangle(6,6,204,44);
settextstyle(1,0,1);
outtextxy(15,8,"L");
delay(300);
outtextxy(30,8,"O");
//delay(300);
outtextxy(45,8,"A");
//delay(300);
outtextxy(60,8,"D");
//delay(300);
outtextxy(75,8,"I");
//delay(300);
outtextxy(90,8,"N");
//delay(300);
outtextxy(105,8,"G");
delay(300);
outtextxy(120,8,".");
delay(300);
outtextxy(135,8,".");
delay(300);
outtextxy(150,8,".");
delay(300);
outtextxy(165,8,".");
delay(300);
outtextxy(180,8,".");
delay(300);
outtextxy(195,8,".");
delay(300);
}
closegraph();
main:
 do
{
clrscr();
initgraph(&gd,&gm,"c://Turboc3//bgi");
//printf("\n\n================================: Main Menu :==============================");
printf("\n\n\n\t\t1.  rint Differnt Massages");
printf("\n\n\t\t2.  rithmatic Operation");
printf("\n\n\t\t3. f...else");
printf("\n\n\t\t4.  oop");
printf("\n\n\t\t5.  xit");
//printf("\n\n=====================================:End:=================================");
printf("\n\t\t\t Enter your Choise ......");
/* Graphics -------------------------------------------------------------------------------------*/
setcolor(5);
settextstyle(1,0,1);
outtextxy(140,20,"----------MAIN MENU----------");
outtextxy(190,220,"--------End--------");
setcolor(10);
outtextxy(147,45,"P");
setcolor(10);
outtextxy(147,74,"A");
setcolor(10);
outtextxy(148,105,"i");
setcolor(10);
outtextxy(149,137,"L");
setcolor(10);
outtextxy(149,170,"E");

setcolor(15);
rectangle(1,250,600,10);
/*Graphics End -----------------------------------------------------------------------------------*/
scanf(" %c",&ch);
closegraph();
  if(ch=='1'||ch=='p'||ch=='P')
   {
    do
    {
    clrscr();
    initgraph(&gd,&gm,"c://Turboc3//bgi");
    //printf("\n\n==============================: Program Menu :==================================");
    printf("\n\n\t1.  ime Table Of TY BTECH(DIV-A)");
    printf("\n\n\t2. Time Table Of  Y BTECH(DIV-B)");
    printf("\n\n\t3.  ntroduction");
    printf("\n\n\t4.   ain Menu");
    printf("\n\n\t5.  xit ");
    //printf("\n\n=====================================:End:=====================================");
    printf("\n\n\t Enter Your Choise....");
    /* Graphics :-----------------------------------------------------------------------------------*/
    setcolor(5);
    settextstyle(1,0,1);
    outtextxy(140,10,"----------Program Menu----------");
    outtextxy(210,220,"--------End--------");
    setcolor(10);
    outtextxy(87,25,"T");
    outtextxy(199,57,"s");
    outtextxy(89,89,"I");
    outtextxy(89,121,"M");
    outtextxy(85,153,"E");
    setcolor(15);
    rectangle(1,250,600,10);
    /*End Graphics :-------------------------------------------------------------------------- */
    scanf(" %c",&ch);
    closegraph();
    if(ch=='1'||ch=='t'||ch=='T')
    {
      clrscr();
      printf("\n\t\t\t*****Time Table*****\t\t");
      printf("\n\nClass:TE E&TC(A)\t\tYear:2019-20\t\tClass Room No.19");
      printf("\n___________________________________________________________________________");
      printf("\nsr.no\tTime\t\tmon\ttue\twed\tthu\tfri\t\tsat");
      printf("\n___________________________________________________________________________");
      printf("\n\n1)\t9amto10am\tCN&CC\tCN&CC\tESD\tAWP\tCN&CC-A2\tAWP\n\n2)\t10amto11am\tAWP\tAWP\tCN&CC\tESD\t-:-\t\tESD\n\n3)\t11amto12pm\t\t=====Long Recess=====\n\n4)\t12pmto1pm\tWDD\tCRTP\tPE\tWDD\tWDD\t\tWDD\n\n5)\t1pmto2pm\tPE\t-:-\tDIP\tPE\tPE\t\tDIP\n\n6)\t2pmto2:10pm\t\t=====Short Recess=====\n\n7)\t2:10pmt03:10pm\tCRTP\tOFF\tWDD\tPE-A2\tESD\t\tWDD\n\n8)\t3:10to4:10\t-:-\tOFF\t-:-\t-:-\tCN&CC\t\t-:-");
      printf("\n___________________________________________________________________________");
    }
    else if(ch=='2'||ch=='S'||ch=='s')
    {
      clrscr();
      printf("\nSE E&Tc(B)\t\t\t*****Time Table*****\t\tyear2020-21");
      printf("\n\nsr.no\tTime\t\tmon\ttue\twed\tthu\tfri\tsat");
      printf("\n\n1\t9amto10am\tPDE-b1\tEMI-B1\tEMI\tMP\tEMI\tMP\n\n2\t10amto11am\t-:-\t-:-\t-:-\tEMI\tS&S\tNMCP\n\n3\t11amto12pm\t\t=====Long Recess=====\n\n4\t12pmto1pm\tACE\tACE\tMP-B1\tACE-B1\tSSD-B1\tS&S\n\n5\t1pmto2pm\tS&S\tMP-B1\t-:-\t-:-\t-:-\tS&S-B1\n\n6\t2pmto2:10pm\t\t=====Short Recess=====\n\n7\t2:10pmt03:10pm\tNMCP\tCRTP\tMP\tCRTP\tNMCP\tS&S\n\n8\t3:10to4:10\tACE\t-:-\tNMCP\t-:-\tACE\t-:-\n\n9\t4:10pmto6:10pm\tApti\tAIML\tAIML\tAIML\tAIML\tAIML");
    }
    else if(ch=='3'||ch=='I'||ch=='i')
    {
     clrscr();
     printf("\n\t\t\t*******PERSONAL MEMORANDA*******\t\t\t");
     printf("________________________________________________________________________________");
     printf("* Name :- Dhananjay Dattatray Khairnar\n");
     printf("________________________________________________________________________________");
     printf("* Residential Address :- 07 kazhi Nagar , Tal.shirpur , Dist.Dhule ");
     printf("\n________________________________________________________________________________");
     printf("* Mobile No :- 8007420579\t\t* E-mail :- dhananjaykhairnar15@gmail.com");
     printf("\n________________________________________________________________________________");
     printf("* Date of Birth :- 15-Oct-1999\t\t* Ege :- 20 Years");
     printf("\n________________________________________________________________________________");
     printf("* Blood Group :- O+\t\t\t* cast :- maratha-Kumbi");
     printf("\n________________________________________________________________________________");
    }
    else if(ch=='4'||ch=='M'||ch=='m')
      goto main  ;
    else if(ch=='5'||ch=='e'||ch=='E')
      exit(0);
    else
      printf("\n\n Please Enter The valide Choise...");
      printf("\n\n Go to Main Manu press [n] And Program Manu Press [y] ....");
      scanf(" %c",&c);
    }while(c=='y'||c=='Y');
    clrscr();
   }
   else if(ch=='2'||ch=='A'||ch=='a')
   {
    do
   {
    clrscr();
    initgraph(&gd,&gm,"c://Turboc3//bgi");
    //printf("\n\n==============================: Program Menu :==================================");
    printf("\n\n\t1. For  ddition");
    printf("\n\n\t2. For  ubstraction");
    printf("\n\n\t3. For  ultiplication");
    printf("\n\n\t4. For  ivision");
    printf("\n\n\t5.  eometry Formulas");
    printf("\n\n\t6. Main Men ");
    printf("\n\n\t7.  xit");
    //printf("\n\n=====================================:End:=====================================");
    printf("\n\n\tEnter Your Choise....");
    /* Graphics :-------------------------------------------------------------------------- */
    setcolor(5);
    settextstyle(1,0,1);
    outtextxy(140,10,"----------Program Menu----------");
    outtextxy(210,275,"--------End--------");
    setcolor(10);
    outtextxy(116,25,"A");
    outtextxy(118,57,"S");
    outtextxy(115,89,"M");
    outtextxy(118,121,"D");
    outtextxy(85,153,"G");
    settextstyle(2,0,5);
    outtextxy(152,191,"u");
    settextstyle(1,0,1);
    outtextxy(85,217,"E");
    setcolor(15);
    rectangle(1,350,600,10);
    /* End Graphics ---------------------------------------------------------------------------*/
    scanf(" %c",&ch);
    closegraph();
    if(ch=='1'||ch=='A'||ch=='a')
    {
    do
    {
     clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//   printf("\n\n==============================: Program Menu :==================================");
     printf("\n\n\n\t1. Addition of Two No.");
     printf("\n\n\t2. Addition of Three No.");
     printf("\n\n\t3. Addition of Two Float No.");
     printf("\n\n\t4. Addition of Three Float No.");
 //  printf("\n\n\t5 Addition of multi No.");//
     printf("\n\n\t5. Main Menu");
     printf("\n\n\t6. Exit");
//     printf("\n\n=====================================:End:=====================================");
     printf("\n\n\tEnter Yor Choise....");
     /* Graphics :-----------------------------------------------------------------------------------*/
     setcolor(5);
     settextstyle(1,0,1);
     outtextxy(140,10,"----------Program Menu----------");
     outtextxy(210,280,"--------End--------");
     setcolor(15);
     rectangle(1,350,600,10);
     /*End Gaphics :---------------------------------------------------------------------------------*/
     scanf(" %c",&ch);
     closegraph();
     if(ch == '1'||ch=='t'||ch=='T')
      {
      clrscr();
      printf("\n\n\tEnter The First No.\t=\t");
      scanf("%d",&fno);
      printf("\n\n\tEnter The Second No.\t=\t");
      scanf("%d",&sno);
      printf("\n\n\tAddition of %d and %d\t=\t%d",fno,sno,fno+sno);
      break;
      }
     else if(ch == '2'||ch=='H'||ch=='h')
      {
      clrscr();
      printf("\n\n\tEnter The First No.\t=\t");
      scanf("%d",&fno);
      printf("\n\n\tEnter The Second No.\t=\t");
      scanf("%d",&sno);
      printf("\n\n\tEnter The Third No.\t=\t");
      scanf("%d",&tno);
      printf("\n\n\tAddition\t=\t%d",fno+sno+tno);
      break;
      }
     else if(ch == '3'||ch=='W'||ch=='w')
      {
      clrscr();
      printf("\n\n\tEnetr The First Float No.\t=\t");
      scanf("%f",&ffno);
      printf("\n\n\tEnetr The Second Float No.\t=\t");
      scanf("%f",&sfno);
      printf("\n\n\tAddition of %.2f and %.2f\t=\t%.2f",ffno,sfno,ffno+sfno);
      break;
      }
     else if(ch =='4'||ch=='r'||ch=='r')
      {
      clrscr();
      printf("\n\n\tEnetr The First Float No.\t=\t");
      scanf("%f",&ffno);
      printf("\n\n\tEnetr The Second Float No.\t=\t");
      scanf("%f",&sfno);
      printf("\n\n\tEnetr The Third Float No.\t=\t");
      scanf("%f",&tfno);
      printf("\n\n\tAddition\t=\t%.2f",ffno+sfno+tfno);
      break;
      }
     else if(ch == '5')
      goto main;
     else if(ch=='6')
      {
       exit(0);
       break;
      }
     else
     {
      printf("\n\n\tPlese Enter Valide Choise...");
     }
      printf("\n\n\tGo to Main Menu Press[n] and program Menu Press[y]....");
      scanf(" %c",&c);
    }while(c=='y'||c=='Y');
    }
    else if(ch=='2'||ch=='S'||ch=='s')
     {
     do
     {
     clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//     printf("\n\n==============================: Program Menu :==================================");
     printf("\n\n\n\t1. Substraction of Two No.");
     printf("\n\n\t2. Substraction of float No.");
     printf("\n\n\t3. Main Menu");
     printf("\n\n\t4. Exit");
//     printf("\n\n=====================================:End:=====================================");
     printf("\n\n\tEnetr your Choise.....");
     /* Graphics :-----------------------------------------------------------------------------------*/
     setcolor(5);
     settextstyle(1,0,1);
     outtextxy(140,10,"----------Program Menu----------");
     outtextxy(210,220,"--------End--------");
     setcolor(15);
     rectangle(1,250,600,10);
     /*End Gaphics :---------------------------------------------------------------------------------*/

     scanf(" %c",&ch);
     closegraph();
     switch(ch)
     {
     case '1' :
     case 't' :
     case 'T' :
     clrscr();
     printf("\n\n\tEnter The First No.\t=\t");
     scanf("%d",&fno);
     printf("\n\n\tEnter The Second No.\t=\t");
     scanf("%d",&sno);
     printf("\n\n\tSubstraction of %d and %d\t=\t%d",fno,sno,fno-sno);
     break;
     case '2' :
     case 'f' :
     case 'F' :
     clrscr();
     printf("\n\n\tEnter The First Float No.\t=\t");
     scanf("%f",&ffno);
     printf("\n\n\tEnter The Second Float No.\t=\t");
     scanf("%f",&sfno);
     printf("\n\n\tSubstraction of %.2f and %.2f\t=\t%.2f",ffno,sfno,ffno-sfno);
     break;
     case '3':
     case 'M':
     case 'm':
      goto main ;
     //break;
     case '4':
     case 'e':
     case 'E':
     exit(0);
     break;
     default:
     printf("\n\n\tPlease Enter the Valide Choise....");
     //break;
     printf("\n\n\tGo to Main Menu Press[n] and program Menu Press[y]....");
     scanf(" %c",&c);
     }
     }while(c=='y'||c=='Y');
     }
    else if(ch=='3'||ch=='M'||ch=='m')
    {
    do
    {
    clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//    printf("\n\n==============================: Program Menu :==================================");
    printf("\n\n\n\t1. Multiplication of Two No.");
    printf("\n\n\t2. Multiplication of Float No.");
    printf("\n\n\t3. Main Menu");
    printf("\n\n\t4. Exit");
//    printf("\n\n=====================================:End:=====================================");
    printf("\n\n\tEnter your Choise....");
     /* Graphics :-----------------------------------------------------------------------------------*/
     setcolor(5);
     settextstyle(1,0,1);
     outtextxy(140,10,"----------Program Menu----------");
     outtextxy(210,200,"--------End--------");
     setcolor(15);
     rectangle(1,250,600,10);
     /*End Gaphics :---------------------------------------------------------------------------------*/
     scanf(" %c",&ch);
    closegraph();
    if(ch=='1'||ch=='T'||ch=='t')
    {
     clrscr();
     printf("\n\n\tEnter The First No.\t=\t");
     scanf("%d",&fno);
     printf("\n\n\tEnter The Second No.\t=\t");
     scanf("%d",&sno);
     printf("\n\n\tMultiplication of %d and %d\t=\t%d",fno,sno,fno*sno);
    }
    else if(ch=='2'||ch=='f'||ch=='F')
    {
     clrscr();
     printf("\n\n\tEnter The First Float  No.\t=\t");
     scanf("%f",&ffno);
     printf("\n\n\tEnter The Second Float No.\t=\t");
     scanf("%f",&sfno);
     printf("\n\n\tMultiplication of %.2f and %.2f\t=\t%.2f",ffno,sfno,ffno*sfno);
    }
    else if(ch=='3'||ch=='M'||ch=='m')
     goto main;
    else if(ch=='4'||ch=='e'||ch=='E')
     exit(0);
    else
    {
     printf("\n\n\tPlease enter The valide Choise....");
    }
     //break;
     printf("\n\n\tGo to Main Menu Press[n] and program Menu Press[y]....");
     scanf(" %c",&c);
    }while(c=='y'||c=='Y');
    }
    else if(ch=='4'||ch=='D'||ch=='d')
     {
      clrscr();
      do
      {
      clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//      printf("\n\n==============================: Program Menu :==================================");
      printf("\n\n\n\t1. Division of Two No.");
      printf("\n\n\t2. Main Menu");
      printf("\n\n\t3. Exit");
//      printf("\n\n=====================================:End:=====================================");
      printf("\n\n\tEnter your Choise....");
      /* Graphics :-----------------------------------------------------------------------------------*/
      setcolor(5);
      settextstyle(1,0,1);
      outtextxy(140,10,"----------Program Menu----------");
      outtextxy(210,180,"--------End--------");
      setcolor(15);
      rectangle(1,230,600,10);
      /*End Gaphics :---------------------------------------------------------------------------------*/
      scanf(" %c",&ch);
      closegraph();
      if(ch=='1'||ch=='D'||ch=='d')
      {
      clrscr();
      printf("\n\n\tEnter The First No.\t=\t");
      scanf("%f",&ffno);
      printf("\n\n\tEnter The Second No.\t=\t");
      scanf("%f",&sfno);
      printf("\n\n\tDivision of %.2f and %.2f\t=\t%.2f",ffno,sfno,ffno/sfno);
      break;
      }
      else if(ch=='2'||ch=='M'||ch=='m')
       goto main;
      else if(ch=='3'||ch=='e'||ch=='E')
      {
      exit(0);
      }
      else
      {
      printf("\n\n\tPlease Enter the valide Choise....");
      break;
      }
      printf("\n\n\tGo to Main Menu Press[n] and program Menu Press[y]....");
      scanf(" %c",&c);
      }while(c=='y'||c=='Y');
     }
    else if(ch=='5'||ch=='G'||ch=='g')
     {
     do
     {
     clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//     printf("\n\n==============================: Program Menu :==================================");
     printf("\n\n\n\t1. Area and Parameter of Square ");
     printf("\n\n\t2. Area and Parameter of Rectangle");
     printf("\n\n\t3. Area of Triangle");
     printf("\n\n\t4. Area and Circumference Circle");
     printf("\n\n\t5. Surface Area and volume of Cylinder");
     printf("\n\n\t6. Surface Area and volume of Cone");
     printf("\n\n\t7. Surface Area and Volume of Sphere");
     printf("\n\n\t8. Main Menu");
     printf("\n\n\t9. Exit");
//     printf("\n\n=====================================:End:=====================================");
     printf("\n\n\tEnter your Choise....");
     /* Graphics :-----------------------------------------------------------------------------------*/
     setcolor(5);
     settextstyle(1,0,1);
     outtextxy(140,10,"----------Program Menu----------");
     outtextxy(210,355,"--------End--------");
     setcolor(15);
     rectangle(1,400,600,10);
     /*End Gaphics :---------------------------------------------------------------------------------*/
     scanf(" %c",&ch);
     closegraph();
     if(ch=='1'||ch=='s'||ch=='S')
      {
       int l ;
       clrscr();
       printf("\n\n\t\t\t# Area and Parameter of Square #");
       printf("\n\n\tEnter The Length of Square\t=\t");
       scanf("%d",&l);
       printf("\n\n\tArea of Square\t=\t%d",l*l);
       printf("\n\n\tParameter of Square\t=\t%.2f",4.0*l);
      }
     else if(ch=='2'||ch=='R'||ch=='r')
      {
       int l , br ;
       clrscr();
       printf("\n\n\t\t\t# Area and parameter of Rectangle #");
       printf("\n\n\tEnter the Lenght\t=\t");
       scanf("%d",&l);
       printf("\n\n\tEnter the Bridth\t=\t");
       scanf("%d",&br);
       printf("\n\n\tArea of Reactangle\t=\t%.2f",(l*1.0)*br);
       printf("\n\n\tParameter of Reactangle\t=\t%.2f",2.0*(l+br));
      }
      else if(ch=='3'||ch=='t'||ch=='T')
       {
	int b ,h ;
	clrscr();
	printf("\n\n\t\t\t# Area of Triangle #");
	printf("\n\n\tEnter the Bridth of Triangle\t=\t");
	scanf("%d",&b);
	printf("\n\n\tEnter the Hight of Triangle\t=\t");
	scanf("%d",&h);
	printf("\n\n\tArea of Triangle\t=\t%.2f",0.5*b*h);
       }
      else if(ch=='4'||ch=='c'||ch=='C')
       {
       int  r ;
       clrscr();
       printf("\n\n\t\t\t# Area and Circumference of the Circle #");
       printf("\n\n\tEnter the Radius of Circle\t=\t");
       scanf("%d",&r);
       printf("\n\n\t Area of Circle\t=\t%.2f",3.14*(r*r));
       printf("\n\n\t Circumference of the Circle\t=\t%.2f",2*3.14*r);
       }
      else if(ch=='5'||ch=='y'||ch=='Y')
       {
       int r , h ;
       clrscr();
       printf("\n\n\t\t\t# Surface Area and Volume of a Cylinder #");
       printf("\n\n\tEnter the Radius of Cylinder\t=\t");
       scanf("%d",&r);
       printf("\n\n\tEnter the Hight of Cylinder\t=\t");
       scanf("%d",&h);
       printf("\n\n\tSurface Area of a Cylinder\t=\t%.2f",2*3.14*r*h);
       printf("\n\n\tVolume of Cylinder\t=\t%.2f",3.14*(r*r)*h);
       }
      else if(ch=='6'||ch=='o'||ch=='O')
       {
       int r ,h ;
       clrscr();
       printf("\n\n\t\t\t# Surface Area and volume of a Cone #");
       printf("\n\n\tEnter the Radius of cone\t=\t");
       scanf("%d",&r);
       printf("\n\n\tEnter the Hight of cone \t=\t");
       scanf("%d",&h);
       printf("\n\n\tSurface Area of Cone\t=\t%.3f",3.14*(r*((h*h)+(r*r))^1/2));
       printf("\n\n\tVolume of Cone\t=\t%.2f",0.333*3.14*(r*r)*h);
       }
      else if(ch=='7'||ch=='p'||ch=='P')
       {
       int r ;
       clrscr();
       printf("\n\n\t\t\t# Surface Area and Volume of Sphere");
       printf("\n\n\tEnter The Radius of Sphere\t=\t");
       scanf("%d",&r);
       printf("\n\n\tSurface Area of a Sphere\t=\t%.2f",4.0*3.14*(r*r));
       printf("\n\n\tVolume of Sphere\t=\t%.3f",1.333*3.14*(r*r*r));
       }
      else if(ch=='8'||ch=='M'||ch=='m')
       goto main;
      else if(ch=='9'||ch=='e'||ch=='E')
       exit(0);
      else
       {
	printf("\n\n\tPlease Enter Valide Choise....");
	break;
       }
       printf("\n\n\tGo to Main Menu Press[n] and program Menu Press[y]....");
       scanf(" %c",&c);
     }  while(c=='y'||c=='Y');
     }
    else if(ch=='6'||ch=='U'||ch=='u')
    goto main;
    else if(ch=='7'||ch=='e'||ch=='E')
     exit(0);
    else
     printf("\n\n\t Please Enter The Valide Choise....");
     printf("\n\n\t Go to Program Menu Press[y] and  Main Menu Press[n]....");
     scanf(" %c",&c);
   }while(c=='y'||c=='Y');
   }
   else if(ch=='3'||ch=='i'||ch=='I')
    {
     do
      {
      clrscr();
      initgraph(&gd,&gm,"c://Turboc3//bgi");
//      printf("\n\n==============================: Program Menu :==================================");
      printf("\n\n\n\t1. For Finding Greatest No. from three no. ");
      printf("\n\n\t2. For checking No. is +ve or -ve .");
      printf("\n\n\t3. For checking No. is odd or enen .");
      printf("\n\n\t4. HSC and SSC Result of any Student .");
      printf("\n\n\t5. C program to Check Leap Year .");
      printf("\n\n\t6. Enter The Month No. and Print No. of Days in Month ");
      printf("\n\n\t7. Main Menu");
      printf("\n\n\t8. Exit ");
//      printf("\n\n=====================================:End:=====================================");
      printf("\n\n\tEnter Your Choise....");
      /* Graphics :-----------------------------------------------------------------------------------*/
      setcolor(5);
      settextstyle(1,0,1);
      outtextxy(140,10,"----------Program Menu----------");
      outtextxy(210,355,"--------End--------");
      setcolor(15);
      rectangle(1,400,600,10);
      /*End Gaphics :---------------------------------------------------------------------------------*/
      scanf(" %c",&ch);
      closegraph();
      if(ch=='1'||ch=='f'||ch=='F')
       {
	 clrscr();
	 printf("\n\n\tFinding Gratest No. from Three No.");
	 printf("\n\n\tEnter The First No.\t=\t");
	 scanf("%d",&fno);
	 printf("\n\n\tEnter The Second No.\t=\t");
	 scanf("%d",&sno);
	 printf("\n\n\tEnter The Third No.\t=\t");
	 scanf("%d",&tno);
	 if(fno==sno&&sno==tno)
	 {
	  printf("\n\n\tBoth Are Same No.");
	 }
	 else
	  {
	   if(fno>sno&&fno>tno)
	    printf("\n\n\t%d is Gratest No.",fno);
	   else
	   {
	    if(sno>tno)
	     printf("\n\n\t%d is Gratest No.",sno);
	    else
	     printf("\n\n\t%d is Grater No.",tno);
	   }
	  }
	}
	 else if(ch=='2'||ch=='O'||ch=='o')
	   {
	   clrscr();
	   printf("\n\n\tEnter the no\t=\t");
	   scanf("%d",&fno);
	   if(fno<0)
	    printf("\n\n\tNO is -ve");
	   else if(fno>0)
	    printf("\n\n\tNo is +ve");
	   else
	    printf("\n\n\t No. is 0");
	   }
	 else if(ch=='3'||ch=='r'||ch=='R')
	    {
	    clrscr();
	    printf("\n\n\t Enter The No.\t=\t");
	    scanf("%d",&fno);
	    if(fno%2==0)
	     printf("\n\n\t%d is Even No.",fno);
	    else
	     printf("\n\n\t%d is Odd No.",fno);
	    }
	 else if(ch=='4'||ch=='H'||ch=='h')
	   {
	    {
	      int b ;
	      clrscr();
	      printf("\n For HSC Result press 1 and SSC Result press 0......");
	      scanf("%d",&b);
	      if(b==1)
	      {
	       int a,s1,s2,s3,s4,s5,s6,s7,total;
	       float per ;
	       clrscr();
	       printf("\t\t*HIGHER SECONDARY CERTIFICATE EXAMINATION*");
	       printf("\n\t______________________________________________________________________");
	       printf("\n\tBoard\t\t\tSeat No.\t\t\tDate");
	       printf("\n\tNASHIK\t\t\tS028");
	       scanf("%d",&a);
	       printf("\t______________________________________________________________________");
	       printf("\n\tSubject\t\t\tMarks\t\t\tIn figers");
	       printf("\n\t______________________________________________________________________");
	       printf("\n\t01ENG\t\t\t100\t\t\t");
	       scanf("%d",&s1);
	       printf("\n\t02MAR\t\t\t100\t\t\t");
	       scanf("%d",&s2);
	       printf("\n\t40MATH\t\t\t100\t\t\t");
	       scanf("%d",&s3);
	       printf("\n\t54PHY\t\t\t100\t\t\t");
	       scanf("%d",&s4);
	       printf("\n\t55CHEM\t\t\t100\t\t\t");
	       scanf("%d",&s5);
	       printf("\n\t56BIO\t\t\t100\t\t\t");
	       scanf("%d",&s6);
	       printf("\n\t31ENV\t\t\t050\t\t\t");
	       scanf("%d",&s7);
	       printf("\t_______________________________________________________________________");
	       total = s1+s2+s3+s4+s5+s6+s7 ;
	       per = total / 6.5 ;
	       printf("\n\tPer\t\t\tMarks\t\t\tTotal");
	       if(s1<35||s2<35||s3<35||s4<35||s5<35||s6<35||s7<35)
		printf("\n\t%.2f\t\t\t650\t\t\t%d\t//FAIL//",per,total);
	       else
	      {
	       if(per<35)
		printf("\n\t%.2f\t\t\t650\t\t\t%d\t//PASS//",per,total);
	       else
		{
		 if(per<60)
		    printf("\n\t%.2f\t\t\t650\t\t\t%d\t//GRADE II//",per,total);
		 else
		  {
		    if(per<75)
		     printf("\n\t%.2f\t\t\t650\t\t\t%d\t//GRADE I//",per,total);
		     else
			printf("\n\t%.2f\t\t\t650\t\t\t%d\t*DISTINCTION*",per,total);
		  }
		}
	       }
		printf("\n\t______________________________________________________________________");
	       }
	      else
	       {
		if(b==0)
		  {
		   int a,s1,s2,s3,s4,s5,s6,total,f;
		   float percentage ;
		   clrscr();
		   printf("\t\t\t*SECONDARY SCHOOL CERTIFICATE*");
		   printf("\n\t____________________________________________________________________");
		   printf("\n\tBoard\t\t\tSeat No.\t\t\tDate");
		   printf("\n\tNASHIK\t\t\tD096");
		   scanf("%d",&a);
		   printf("\t____________________________________________________________________");
		   printf("\n\tSubject\t\t\tMarks\t\t\tIn figers");
		   printf("\n\t____________________________________________________________________");
		   printf("\n\tMARATHI\t\t\t100\t\t\t");
		   scanf("%d",&s1);
		   printf("\n\tSANSKRIT\t\t100\t\t\t");
		   scanf("%d",&s2);
		   printf("\n\tENGLISH\t\t\t100\t\t\t");
		   scanf("%d",&s3);
		   printf("\n\tMATH\t\t\t100\t\t\t");
		   scanf("%d",&s4);
		   printf("\n\tSCIENCE\t\t\t100\t\t\t");
		   scanf("%d",&s5);
		   printf("\n\tSOCIAL S.\t\t100\t\t\t");
		   scanf("%d",&s6);
		   printf("\n\t____________________________________________________________________");
		   if(s1<s2&&s1<s3&&s1<s4&&s1<s5&&s1<s6)
		   s1=f;
		   else
		    {
		     if(s2<s1&&s2<s3&&s2<s4&&s2<s5&&s2<s6)
		      s2=f;
		     else
		      {
		       if(s3<s1&&s3<s2&&s3<s4&&s3<s5&&s3<s6)
			s3=f;
		       else
			{
			 if(s4<s1&&s4<s2&&s4<s3&&s4<s5&&s4<s6)
			 s4=f;
			else
			 {
			  if(s5<s1&&s5<s2&&s5<s3&&s5<s4&&s5<s6)
			   s5=f;
			  else
			   s6=f;

			  }
			}
		      }
		     }

		     total =(s1+s2+s3+s4+s5+s6)-f;
		     percentage = total / 5.00 ;
		     printf("\n\tPer\t\t\tMarks\t\t\tTotal");
		     if(s1<35||s2<35||s3<35||s4<35||s5<35||s6<35)
		       printf("\n\t%.2f\t\t\t500\t\t\t%d\t//FAIL//",percentage,total);
		     else
		      {
		       if(percentage<35)
			 printf("\n\t%.2f\t\t\t500\t\t\t%d\t//PASS//",percentage,total);
		       else
			{
			 if(percentage<60)
			   printf("\n\t%.2f\t\t\t500\t\t\t%d\t//GRADE II//",percentage,total);
			 else
			  {
			   if(percentage<75)
			    printf("\n\t%.2f\t\t\t500\t\t\t%d\t//GRADE I//",percentage,total);
			   else
			    printf("\n\t%.2f\t\t\t500\t\t\t%d\t*DISTINCTION*",percentage,total);
			   }
			 }
		      }
		     printf("\n\t____________________________________________________________________");
		    }
		   }

	   }
	   }
	 else if(ch=='C'||ch=='5'||ch=='c')
	  {
	   clrscr();
	   printf("\n\n\t Enter The the Year\t=\t");
	   scanf("%d",&fno);
	   if(fno%4==0||fno%400==0)
	    printf("\n\n\tThis Year is Leap Year ");
	   else
	    printf("\n\n\tThis Year is Not Leap Year");
	  }
	 else if(ch=='6'||ch=='n'||ch=='N')
	  {
	   int n , yr;
	   clrscr();
	   printf("\n\n\tEnter the Year\t=\t");
	   scanf("%d",&n);
	   printf("\n\n\tEnter the No.\t=\t");
	   scanf("%d",&n);
	   if(n==1)
	    printf("\n\n\tJanuary \n\n\t 31 Days ");
	   else if(n==2)
	    {
	     if(yr%4==0||yr%400==0)
	       printf("\n\n\tFebruary \n\n\t 28 Days");
	     else
	       printf("\n\n\t February\n\n\t 29 Days \n\n\t This Year is Leap Year");
	    }
	   else if(n==3)
	      printf("\n\n\tMarch \n\n\t 31 Days");
	   else if(n==4)
	      printf("\n\n\tApril \n\n\t 30 Days");
	   else if(n==5)
	      printf("\n\n\tMay \n\n\t 31 Days");
	   else if(n==6)
	      printf("\n\n\tjune \n\n\t 30 Days ");
	   else if(n==7)
	      printf("\n\n\tJuly \n\n\t 31 Days");
	   else if(n==8)
	      printf("\n\n\tAugust \n\n\t 31 Days");
	   else if(n==9)
	      printf("\n\n\tSaptember \n\n\t 30 Days");
	   else if(n==10)
	      printf("\n\n\t October \n\n\t 31 Days");
	   else if(n==11)
	      printf("\n\n\t November \n\n\t 30 Days");
	   else if(n==12)
	      printf("\n\n\t December \n\n\t 31 Days");
	   else
	      printf("\n\n\t Please Enter Valide Number");

	  }
	 else if(ch=='7'||ch=='M'||ch=='m')
	   goto main;
	 else if(ch=='8'||ch=='e'||ch=='E')
	   exit(0);
	 else
	  printf("\n\n\tPlease Enter the Valide Choise ....");
	  printf("\n\n\t Go to Program Menu Press[y] and  Main Menu Press[n]....");
	  scanf(" %c",&c);
    }while(c=='y'||c=='Y');
    }
   else if(ch=='4'||ch=='L'||ch=='l')
    {
     do
     {
     clrscr();
     initgraph(&gd,&gm,"c://Turboc3//bgi");
//     printf("\n\n==============================: Program Menu :==================================");
     printf("\n\n\n\t\t1. While loop");
     printf("\n\n\t\t2. For loop");
     printf("\n\n\t\t3. Main Menu");
     printf("\n\n\t\t4. Exit");
//     printf("\n\n=====================================:End:=====================================");
     printf("\n\n\t\tEnter your choise.....");
     /* Graphics :-----------------------------------------------------------------------------------*/
     setcolor(5);
     settextstyle(1,0,1);
     outtextxy(140,10,"----------Program Menu----------");
     outtextxy(210,200,"--------End--------");
     setcolor(15);
     rectangle(1,250,600,10);
     /*End Gaphics :---------------------------------------------------------------------------------*/
     scanf(" %c",&ch);
     closegraph();
     switch(ch)
     {
      case '1':
      case 'W':
      case 'w':
      do
      {
       clrscr();
       printf("\n\n==============================: Program Menu :==================================");
       printf("\n\n\t1. Fibbonacci Series");
       printf("\n\n\t2. Reverse of Given No.");
       printf("\n\n\t3. Armstrong No.");
       printf("\n\n\t4. pallindrome No.");
       printf("\n\n\t5. Main Menu");
       printf("\n\n\t6. Exit");
       printf("\n\n=====================================:End:=====================================");
       printf("\n\n\tEnter your choise.....");
       scanf(" %c",&ch);
       switch(ch)
       {
	case '1':
	case 'F':
	case 'f':
	{
	 int no ;
	 clrscr();
	 printf("\n the Enter The no of terms\t=\t");
	 scanf("%d",&no);
	 while(sum<no)
	 {
	  sum=i+j ;
	  i=j;
	  j=sum;
	  printf("\t\n%d",sum);
	 }
	}
	break;
	case '2':
	case 'r':
	case 'R':
	 clrscr();
	 printf("\n\n\tEnter The no.\t\t=\t");
	 scanf("%ld",&no);
	 while(no!=0)
	 {
	  rev=rev*10 ;
	  rev=rev+no%10 ;
	  no=no/10 ;
	 }
	 printf("\n\n\tEnter the Reverse No.\t=\t%ld",rev);
	break;
	case '3':
	case 'A':
	case 'a':
	{
	long int no,sum=0,rem ,back ;
	clrscr();
	printf("\n\n\tEnter the No.\t=\t");
	scanf("%ld",&no);
	back=no ;
	while(no>0)
	{
	 rem=no%10;
	 no=no/10;
	 sum=sum+(rem*rem*rem);
	}
	if(back==sum)
	 printf("\n\n\t%ld is Amstrong No.",sum);
	else
	 printf("\n\n\t%ld is not Amstrong No.",sum);
	}
	break;
	case '4':
	{
	 long int back ;
	 clrscr();
	 printf("\n\n\tEnter the No.\t=\t");
	 scanf("%ld",&no);
	 back=no;
	 while(no!=0)
	 {
	  rev=rev*10;
	  rev=rev+no%10;
	  no=no/10;
	 }
	 if(rev==back)
	  printf("\n\n\t %ld is Pallidrome",back);
	 else
	  printf("\n\n\t %ld is Not Pallidrome",back);
	}
	break;
	case '5':
	case 'M':
	case 'm':
	 goto main ;
	case '6':
	case 'E':
	case 'e':
	 exit(0);
	default :
	 printf("\n\n\tPlease Enter Valide Choise....");
       }
	  printf("\n\n\t Go to Program Menu Press[y] and  Main Menu Press[n]....");
	  scanf(" %c",&c);
     }while(c=='y'||c=='Y');
      case '2':
      case 'f':
      case 'F':
      break ;
      case '3':
      case 'M':
      case 'm':
       goto main ;
      case '4':
      case 'E':
      case 'e':
       exit(0);
      default :
       printf("\n\n\tPlease Enter Valide Choise....");
      }
       printf("\n\n\t Go to Program Menu Press[y] and  Main Menu Press[n]....");
       scanf(" %c",&c);
     }while(c=='y'||c=='Y');
     }
   else if(ch=='5'||ch=='e'||ch=='E')
   exit(0);
   else
   printf("\n\n\tplease Enter Valide Choise");
   printf("\n================================================================================");
   printf("\n\tGo to Main Menu Type [y] or [Y],if you Exit The program press[n]....");
   scanf(" %c",&c);
   printf("\n\n=====================================:End:=====================================");

}while(c=='y' || c=='Y'  );
break;
default :
 clrscr();
 initgraph(&gd,&gm,"c://Turboc3//BGI");
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t* Re-enter the password press 'y'...");
 /* Graphics -------------------------------------------------------------------------------------*/
 setcolor(10);
 rectangle(180,250,495,210);
 setcolor(4);
 rectangle(176,254,499,206);
 /*Graphics End -----------------------------------------------------------------------------------*/
 scanf(" %c",&c);
 closegraph();
 switch(c)
 {
  case 'y':
  case 'Y':
   goto jump ;
  default :
  exit(0);
 }
 printf("\n\n________________________________________________________________________________");

}
clrscr();
printf("\n================================================================================");
printf("\nPress Any Kay to Exit .....");
printf("\n================================================================================");
closegraph();

getch();
}