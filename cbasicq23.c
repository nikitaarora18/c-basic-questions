#include <stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
   if( age<=0)
   {
       printf("invalid age");
   }
    else if(age<18 )
    {
        printf("minor");
    }
    else if(age>=18 && age<60)
    {
        printf("adult");
    }
    else if(age>=60)
    {
        printf("senior citizen");
    }
    return 0;

}