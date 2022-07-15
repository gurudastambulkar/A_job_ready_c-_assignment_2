#include<stdio.h>
#include<conio.h>
int main()
{
    float INR=76.23,a;
    printf("Enter amount in INR ");
    scanf("%f",&a);
    a=(a/INR);
    printf("USD is %f",a);
    return 0;
}
