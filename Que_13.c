#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number ");
    scanf("%d",&a);
    while(a!=0)
    {
        if(b!=0)
            b=b*10;
        b=(a%10)+b;
        a=a/10;
    }
    printf("After rotating %d",b);
    return 0;
}
