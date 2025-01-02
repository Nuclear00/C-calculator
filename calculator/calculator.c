#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;
    printf("Please, enter an operator ( '+' '-' '*' '/' )");
    scanf("%c", &op);
    printf("Enter 2 numbers: ");
    scanf("%lf %lf", &a, &b);
    switch (op) {
    case '+': res = a + b;
    break;
    case '-': res = a - b;
    break;
    case '*': res = a * b;
    break;
    case '/': res = a / b;
    break;
    default:
    printf("Incorrect operator! \n");
    res = -DBL_MAX;
    }
    if(res!=-DBL_MAX)
    printf("%.2lf", res);
    return 0;
    }
