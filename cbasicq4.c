//wap to input 2 floating point variables nd print therir product
#include <stdio.h>
int main(){
float a, b;
printf("enter a decimal number1:");
printf("enter a decimal number2:");
scanf("%f",&a);
scanf("%f",&b);
float product=a*b;
printf("the product of these two decimal numbers is: %f",product);
return 0;
}