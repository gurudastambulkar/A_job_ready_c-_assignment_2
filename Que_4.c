#include<stdio.h>
#include<conio.h>
int main()
{
    int x ,y;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("After swapping %d %d",x,y);
    return 0;
}
