#include <stdio.h>
int main(){
    int number;
    printf("enter the number: ");
    scanf("%d",&number);
    if(number%2==0 && number>0)
    {
        printf("the number is even");
    }
    else if(number%2!=0 && number>0)
    {
        printf("the number is odd");
    }
    else if(number ==0)
    {
        printf("the number is zero");
    }
    else{
        printf("the number is negative cannot be said even or odd");
    
    }
    return 0;
}