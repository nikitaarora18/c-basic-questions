//wap to calculate area of a circle given its radius
#include <stdio.h>
int main(){
    float pi=3.14;
    float radius;
    printf("enter the radius:");
    scanf("%f",&radius);
    float area=pi*radius*radius;
    printf("the area of circle is: %f \n",area);
    return 0;

}