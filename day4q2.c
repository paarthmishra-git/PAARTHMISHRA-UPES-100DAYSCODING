//Write a program to convert temperature from celsius to fahrenheit.
#include<stdio.h>
int main(){
    float celsius;
    printf("enter celsius in degree");
    scanf("%f",&celsius);
    printf("Temperature in fahrenheit is %f",(celsius*1.8)+32);
    return 0;

}
