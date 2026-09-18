//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main(){
    float principle,rate,time,amount;
    printf("enter principle");
    scanf("%f",&principle);
    printf("enter rate");
    scanf("%f",&rate);
printf("enter time in months");
    scanf("%f",&time);
    printf("the simple interest is %f\n",(principle*rate*time)/100);
    amount=principle*pow(1+rate/100,time);
    printf("the compound interest id %f\n",amount-principle);
    return 0;
}
