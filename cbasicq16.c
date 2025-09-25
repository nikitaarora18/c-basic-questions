//print larger number
#include <stdio.h>
int main(){
    int a, b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("first number is largest");
    }
    else{
        printf("second number is largest");

    }
    return 0;
    
}