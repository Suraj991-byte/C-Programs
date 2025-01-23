#include<stdio.h>
#include<conio.h>
void main()
{
    int id,price,qty,total;
    char product_name[50];
    float finaltotal,cgst,sgst;

    printf("Enter product id :");
    scanf("%d",&id);

    printf("\nEnter Product Name :");
    scanf("%s",product_name);

    printf("\nEnter Product Price :");
    scanf("%d",&price);

    printf("\nEnter Product Quantity :");
    scanf("%d",&qty);

    total=price*qty;
    sgst=total*0.06;
    cgst=sgst*0.06;
    finaltotal=total+sgst+cgst;

    printf("\n\t\t\t----------------Bill-----------------");
    printf("\n\t\t\tProduct id          : %d",id);
    printf("\n\t\t\tProduct Name        : %s",product_name);
    printf("\n\t\t\tProduct Price       : %d",price);
    printf("\n\t\t\tProduct Quantity    : %d",qty);
    printf("\n\t\t\tProduct total       : %d",total);
    printf("\n\t\t\tProduct sgst        : %.2f",sgst);
    printf("\n\t\t\tProduct cgst        : %.2f",cgst);
    printf("\n\t\t\tProduct Final Total : %.2f",finaltotal);
    printf("\n\t\t\t-------------------------------------");

    getch();
}
enter the loan amt
enter the intersrtst rate

enter the tenure
calculate total interest


find total


