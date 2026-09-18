//Write a program to swap two numbers using third variable.
#include<stdio.h>
int main(){
    float a,b,temp;
    printf("enter a");
    scanf("%f",&a);
    printf("enter b");
    scanf("%f",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    return 0;
}
