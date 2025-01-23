#include<stdio.h>
#include<conio.h>
void main()
{
    int price,prodId,prodQty,total;
    char ProdName[10];
    float cgst,sgst,finaltotal;

    printf("Enter Product Id :");
    scanf("%d",&prodId);

    printf("\nEnter Product Name :");
    scanf("%s",ProdName);

    printf("\nEnter Product Price :");
    scanf("%d",&price);

    printf("\nEnter Product Quantity :");
    scanf("%d",&prodQty);

    total=price*prodQty;
    cgst=total*0.06;
    sgst=total*0.06;
    finaltotal=cgst+sgst+total;
    printf("\n--------------Bill------------------");
    printf("\nProduct Id            : %d",prodId);
    printf("\nProduct Name          : %s",ProdName);
    printf("\nProduct Price         : %d",price);
    printf("\nProduct Quantity      : %d",prodQty);
    printf("\nTotal                 : %d",total);
    printf("\ncgst                  : %f",cgst);
    printf("\nsgst                  : %f",sgst);
    printf("\nFinal Total           : %f",finaltotal);

    getch();
}
