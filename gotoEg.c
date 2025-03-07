/*
Sample Progrm for goto Statement.c
*/
#include<stdio.h>
int main()
{
    int i=0;
    mahes:
    printf("\n%d",i);
    i++;
    if(i!=5)
    {
        goto mahes;
    }
    printf("\nEnd");
    return 0;
}
