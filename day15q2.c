//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n;
    int fact = 1;
    printf("enter n");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial is: %d\n", fact);

    return 0;
}
