//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(){
    float radius;
    printf("enter radius");
    scanf("%f",&radius);
    printf("the area of circle is %f\n",3.14*radius*radius);
    printf("the circumference of circle is %f\n",2*3.14*radius);
    return 0;

}
