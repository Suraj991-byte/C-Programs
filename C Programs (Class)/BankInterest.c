//calculate total interest and total balance

#include<stdio.h>
#include<conio.h>
void main()
{
    int Account_No,Months;
    char CustName[50];
    float Balance,Interest,totalbalance,FinalBalance,totalinterest;
    printf("Enter Account Number :");
    scanf("%d",&Account_No);

    printf("\nEnter Customer Name :");
    scanf("%s",CustName);

    printf("\nEnter Number of Months :");
    scanf("%d",&Months);

    printf("\nEnter Monthly Balance :");
    scanf("%f",&Balance);

    printf("\nEnter Interest :");
    scanf("%f",&Interest);


    totalinterest=Interest*Months;
    totalbalance=Balance*Months;
    FinalBalance=totalbalance + (totalbalance*(totalinterest/100));

    printf("\nAccount Number      : %d",Account_No);
    printf("\nCustomer Name       : %s",CustName);
    printf("\nNumber of Months    : %d",Months);
    printf("\nMonthly Balance     : %.2f",Balance);
    printf("\nTotal Balance       : %.2f",totalbalance);
    printf("\nTotal Interest      : %.2f",totalinterest);
    printf("\nFinal Balance       : %.2f",FinalBalance);


    getch();
}
