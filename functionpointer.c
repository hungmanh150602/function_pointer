#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);
    return sum;
}

int subtract(int a, int b)
{
    int sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);
    return sub;
}

int multiply(int a, int b)
{
    int mul = a * b;
    printf("%d * %d = %d\n", a, b, mul);
    return mul;
}

int divide(int a, int b)
{
    if (b == 0)
    {
        printf("Error: division by zero\n");
        return 0;
    }

    int div = a / b;
    printf("%d / %d = %d\n", a, b, div);
    return div;
}

int main(void)
{
    int (*operations[])(int, int) =
        {
            add,
            subtract,
            multiply,
            divide
        };

    int command;
    int a;
    int b;

    printf("Enter command (0:add, 1:sub, 2:mul, 3:div): ");
    scanf("%d", &command);

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    if (command < 0 || command >= 4)
    {
        printf("Invalid command\n");
        return 1;
    }

    operations[command](a, b);

    return 0;
}