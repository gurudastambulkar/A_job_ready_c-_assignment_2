#include<stdio.h>
#include<conio.h>
int main()
{
    int x,s=0;
    printf("Enter a three digit number ");
    scanf("%d",&x);
    if(x!=0)
    {
        s=s+(x%10);
        x=x/10;
    }
    if(x!=0)
    {
        s=s+(x%10);
        x=x/10;
    }
    if(x!=0)
    {
        s=s+(x%10);
        x=x/10;
    }
    printf("Sum of digit is %d",s);
    return 0;
}
