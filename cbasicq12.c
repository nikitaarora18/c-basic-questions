//tke two umbers nd display result of all arithmetic operations
#include <stdio.h>
int main(){
    int num1, num2;
    printf("enter num1: ");
     printf("enter num2: ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    int sum=num1+num2;
    int diff=num1-num2;
    int product=num1*num2;
    int remainder=num1%num2;
    int quotient=num1/num2;
if (num2==0)
{
    printf("the quotient and remainder doesnt exist \n");    
}
else{
    printf("the quotient of num1 and num2 is: %d \n",quotient);
    printf("the remainder of num1 and num2 is: %d \n",remainder);
}
printf("the sum of num1 and num2 is : %d \n",sum);
printf("the difference of num1 and num2 is : %d \n",diff);
printf("the product of num1 and num2 is : %d \n",product);
return 0;

}



