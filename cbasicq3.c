//wap to read two integers from user input and display their sum
#include <stdio.h>
int main(){
    int num1, num2;
    printf("enter the num1:\n");
    
    printf("enter the num2: \n");

    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum =num1+num2;
    printf("the sum of num1 and num2 is:%d \n",sum);
    return 0;

}