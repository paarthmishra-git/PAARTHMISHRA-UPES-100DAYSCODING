//Write a program to reverse a given number.
#include<stdio.h>
int main(){
    int num,reversed_num = 0, remainder;
    printf("enter an integer");
    scanf("%d",&num);
    
 while (num != 0) {
        remainder = num % 10;            
        reversed_num = reversed_num * 10 + remainder; 
        num = num / 10;                  
    }

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}
