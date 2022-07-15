#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);
    y==~x;
    x<<1;
    if(y==1)
        printf("even");
    else
        printf("odd");
    return 0;
}
