//remainder
#include <stdio.h>

int main() {
    int num1, num2, remainder;
    printf("Enter two integers : ");
    scanf("%d %d", &num1, &num2);
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.\n");
    } else {
        remainder = num1 % num2;   
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}

