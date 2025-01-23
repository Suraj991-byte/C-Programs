#include<stdio.h>
void main()
{
    int loan_amt,duration,N=12,interest=6;
    float emi;

    printf("Enter the Loan Amount :");
    scanf("%d",&loan_amt);

    printf("\nEnter the Duration in Years :");
    scanf("%d",&duration);

    printf("\nEnter the Interest rate :");
    scanf("%d",interest)


    emi=(loan_amt*interest/12)*((1+interest/12)^N)/((1+interest/12)^N-1);


    printf("EMI is %f",emi);




    getch();
}
