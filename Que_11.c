#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number and a digit ");
    scanf("%d%d",&a,&b);
    a=a*10;
    a=a+b;
    printf("Resulting number is %d",a);
    return 0;
}
