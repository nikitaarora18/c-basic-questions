#include <stdio.h>

int main() {
    int a, b;


    printf("Enter first boolean value (0 or 1): ");
    scanf("%d", &a);

    printf("Enter second boolean value (0 or 1): ");
    scanf("%d", &b);


    printf("a && b = %d\n", a && b);   
    printf("a || b = %d\n", a || b);   

    return 0;
}
