#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("After swapping %d %d",x,y);
    return 0;
}
