#include <stdio.h>

int calc_factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void factorial_main(void) {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Factorial of %d = %d\n", num1, calc_factorial(num1));
    printf("Factorial of %d = %d\n", num2, calc_factorial(num2));
}
