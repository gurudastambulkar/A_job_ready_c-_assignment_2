#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("After making last digit as zero %d",a);
    return 0;
}
