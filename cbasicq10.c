//read a distance in kilometers and print its equivalent in meters centimeter nd milimeters
#include <stdio.h>
int main(){
    printf("enter the distance in kilometers:");
    int distance;
    scanf("%d",&distance);
    int meters=distance*1000;
    int centimeters=meters*100;
    int milimeters=centimeters*10;
    printf("the distance equivalent in meters is %d \n",meters);
     printf("the distance equivalent in centimeters is %d \n",centimeters);
     printf("the distance equivalent in milimeters is %d \n",milimeters);
    return 0;
    
}