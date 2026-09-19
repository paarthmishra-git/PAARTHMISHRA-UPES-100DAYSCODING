//Write a program to check if a number is prime.

#include<stdio.h>
int main(){
    int n;
    int i;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            break;
        }
    }
    if(n>1 && i==n){
        printf("%d is a prime number\n",n);
    }else{
        printf("%d is not a prime number\n",n);
    }
    return 0;
    }
