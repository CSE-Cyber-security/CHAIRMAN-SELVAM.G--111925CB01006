
#include <stdio.h>

int main() {
    int a, b, choice;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch (choice) {
        case 1: printf("Result = %d\n", a + b); break;
        case 2: printf("Result = %d\n", a - b); break;
        case 3: printf("Result = %d\n", a * b); break;
        case 4:
            if (b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
