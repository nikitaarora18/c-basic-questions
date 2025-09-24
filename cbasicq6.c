//take the length and width of rectangle and print its perimeter
#include <stdio.h>
int main(){
    printf("enter length:");
    int length,breadth,perimeter;
    scanf("%d",&length);
    printf("enter breadth:");
    scanf("%d",&breadth);
    perimeter=2*(length+breadth);
    printf("the area of the rectangle is:%d",perimeter);
    return 0;
}