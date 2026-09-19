//Write a program to find the HCF (GCD) of two numbers.

#include<stdio.h>
int main(){
    int n1,n2,temp;
    printf("enter n1");
    scanf("%d",&n1);
    printf("enter n2");
    scanf("%d",&n2);
     
    while(n2 !=0){
        temp=n2;
        n2=n1%n2;
        n1=temp;
    }
    printf("%d", n1);
return 0;
}
