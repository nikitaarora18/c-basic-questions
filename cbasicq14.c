//
#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    printf("enter side1: ");
    scanf("%f",&a);
    printf("enter side2: ");
    scanf("%f",&b);
    printf("enter side3: ");
    scanf("%f",&c);
    float s=(a+b+c)/2;
    float area1=s*(s-a)*(s-b)*(s-c);
    float area2=sqrt(area1);
    printf("the area of triangle using herons formulae is %f \n",area2);
    return 0;
    

}