//Write a program to check if a number is an Armstrong number.

#include <stdio.h>
int main() {
    int num, h, t, o, sum;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    h = num / 100;          
    t = (num / 10) % 10;    
    o = num % 10;           
    
    sum = (h * h * h) + (t * t * t) + (o * o * o);

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
