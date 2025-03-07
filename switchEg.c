/*
Sample Program for switch Statement.c
*/
#include<stdio.h>
int main()
{
    int ch,bi;
    printf("\n Enter the Number : ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("\n Enter your birthday : ");
        scanf("\n %d",bi);
        break;
    case 2:
        printf("\n Two ");
        break;
    default:
        printf(" Invalid Number ");
    }
    return 0;
}
