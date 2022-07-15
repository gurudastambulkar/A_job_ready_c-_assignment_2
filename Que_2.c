#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    x=x/10;
    printf("Without last digit %d",x);
    return 0;
}
