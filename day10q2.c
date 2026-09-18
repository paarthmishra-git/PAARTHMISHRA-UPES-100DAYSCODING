//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    float a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // First check if the sides can actually form a valid triangle
    if((a + b > c) && (b + c > a) && (a + c > b)){
        if(a == b && b == c){
            printf("The triangle is EQUILATERAL.\n");
        }
        else if(a == b || b == c || a == c){
            printf("The triangle is ISOSCELES.\n");
        }
        else{
            printf("The triangle is SCALENE.\n");
        }
    }
    else{
        printf("Error: These sides do not form a valid triangle.\n");
    }
    return 0;
}
