//Write a program to print all factors of a given number.
#include<stdio.h>
int main(){
    int n;
    int i;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
        }
    }
    return 0;
}
