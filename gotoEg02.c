/*
Write a program for the following output using switch case

     MENU CARD
          1.COFEE
          2.TEA
          3.COLD COFFEE
          4.MILK SHAKE

     Enter your choice  :2

     you have selected Tea
     Enter the quantity :5
     Total Amount :50

*/
#include<stdio.h>
int main()
{
    int cho,qua,i,net=0;
    mahes:
    printf("\n\t MENU CARD ");
    printf("\n\t\t1.COFFEE          Rs:15");
    printf("\n\t\t2.TEA             Rs:10");
    printf("\n\t\t3.cold COFFEE     Rs:25");
    printf("\n\t\t4.MILK SHAKE      Rs:50");
    printf("\n\n Enter Your Choice :");
    scanf("%d",&cho);
    switch(cho)
    {
    case 1:
        printf("\n you have selected Coffee");
        printf("\n\n Enter the quantity :");
        scanf("%d",&qua);
        net=net+(qua*15);
        break;
    case 2:
        printf("\n you have selected Tea");
        printf("\n\n Enter the quantity :");
        scanf("%d",&qua);
    net=net+(qua*10);
        break;
    case 3:
        printf("\n you have selected Cold Coffee");
        printf("\n\n Enter the quantity :");
        scanf("%d",&qua);
        net=net+(qua*25);
        break;
    case 4:
        printf("\n you have selected Milk shake");
        printf("\n\n Enter the quantity :");
        scanf("%d",&qua);
        net=net+(qua*50);
        break;
    default :
        printf("\nInvalid Product selection");
        break;

    }


    printf("\n\n Do you want to Continue Press 1 : ");
    scanf("%d",&i);
    if(i==1)
    {
        goto mahes;
    }
    printf("\n Total Amount : %d",net);
    printf("\n Thank you Come Again ");
    return 0;
}
