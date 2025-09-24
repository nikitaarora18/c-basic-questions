//print square and cube
#include <stdio.h>
int main(){
    int number;
    printf("enter the number: \n");
    scanf("%d",&number);
    int square=number*number;
    int cube=square*number;
    printf("the square of the number is %d \n",square);
    printf("the cube of the number is %d \n",cube);
    return 0;


}