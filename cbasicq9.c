//calculate and display average of student 5 subjects marks
#include <stdio.h>
int main(){
    printf("enter your first subject marks: \n");
    printf("enter your second subject marks:\n");
    printf("enter your third subject marks:\n");
    printf("enter your fourth subject marks:\n");
    printf("enter your fifth subject marks:\n");
    float f, s, t, fo, fi;
    scanf("%f",&f);
scanf("%f",&s);
scanf("%f",&t);
scanf("%f",&fo);
scanf("%f",&fi);
float addition=f+s+t+fo+fi;
float average=addition/5;
printf("the average of 5 subject marks of student is: %f \n",average);
return 0;
    
}