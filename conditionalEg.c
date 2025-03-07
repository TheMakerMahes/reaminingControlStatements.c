/*
Sample Program for Conditional Statement.c
*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("\n Enter the A Value : ");
    scanf("%d",&a);
    printf("\n Enter the B Value : ");
    scanf("%d",&b);
    c=a>b?a:b;
    printf(" \n%d is a Greater Value ",c);
}