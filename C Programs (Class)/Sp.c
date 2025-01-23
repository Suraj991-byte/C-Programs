#include<stdio.h>
#include<conio.h>
int main()
{

   /* int a,b;

    printf("Enter 2 Numbers:");
    scanf("%d%d",&a,&b);

    printf("\nAddition : %d",a+b);
    printf("\nSubtraction : %d",a-b);
    printf("\nMultiplication : %d",a*b);
    printf("\nDivision : %d",a/b);








    //Student Marksheet Program

    int roll;
    char name[50];
    float m1,m2,m3,m4,m5,total,avg;


    printf("Enter RollNo:");
    scanf("%d",&roll);

    printf("\nEnter Name:");
    scanf("%s",name);

    printf("\nEnter marks for subject 1:");
    scanf("%f",&m1);

    printf("\nEnter marks for subject 2:");
    scanf("%f",&m2);

    printf("\nEnter marks for subject 3:");
    scanf("%f",&m3);

    printf("\nEnter marks for subject 4:");
    scanf("%f",&m4);

    printf("\nEnter marks for subject 5:");
    scanf("%f",&m5);

    total=m1+m2+m3+m4+m5;
    avg=total/5;


    printf("\n\t\t--------------Student Marksheet-----------------");
    printf("\n\t\t\tRollNo                 : %d",roll);

    printf("\n\t\t\tStudent Name           : %s",name);

    printf("\n\t\t\tMarks for subject 1    : %.2f",m1);

    printf("\n\t\t\tMarks for subject 2    : %.2f",m2);

    printf("\n\t\t\tMarks for subject 3    : %.2f",m3);

    printf("\n\t\t\tMarks for subject 4    : %.2f",m4);

    printf("\n\t\t\tMarks for subject 5    : %.2f",m5);

    printf("\n\t\t------------------------------------------------");

    printf("\n\t\t\tAverage of Marks       : %.2f",avg);
*/




  //Program to Calculate employee salary



  int eid;
  char name[50];
  float bs,da,hra,tax,pf,ts;

  printf("Enter Employee Details ");
  printf("\nEnter Employee Id :");
  scanf("%d",&eid);
  printf("\nEnter Employee Name :");
  scanf("%s",name);
  printf("\nBasic Salary :");
  scanf("%f",&bs);
  printf("\nDA (%%) :");
  scanf("%f",&da);
  printf("\nHRA (%%) :");
  scanf("%f",&hra);
  printf("\nTAX (%%) :");
  scanf("%f",&tax);
  printf("\nPF :");
  scanf("%d",&pf);

  ts=bs+(bs*((da+hra-tax)/100));

  printf("\t\t------------Employee Details--------------");
  printf("\n\t\t\tEmployee Id            : %d",eid);
  printf("\nEnter Employee Name    : %s",name);
  printf("\nBasic Salary           : %.2f",bs);

  printf("\nDA (%%)                : %.2f",da);

  printf("\nHRA (%%)               : %.2f",hra);

  printf("\nTAX (%%)               : %.2f",tax);

  printf("\nPF                     : %.2f",pf);

  printf("\nTotal Salary           : %.2f",ts);


















    getch();


}
