#include <stdio.h>

void integer(void) {
    int a, b;
    printf("Enter numbers a and b: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is bigger than %d\n", a, b);
    else if (b > a)
        printf("%d is bigger than %d\n", b, a);
    else
        printf("Both numbers are equal.\n");
}

