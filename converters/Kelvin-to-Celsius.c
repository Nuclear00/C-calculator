include <stdio.h>
#include <float.h>

int main() {
    char korcs;
    double a, res;
        printf("Please enter C or K (Celsius or Kelvin): ");
        scanf("%c", &korcs);
        printf("Enter a number (Every other than numbers are equal to 0): ");
        scanf("%lf", &a);
    switch (korcs) {
    case 'c': res = 273 + a;
    break;
    case 'k': res = a - 273;
    break;
    default:
        printf("Wrong input!");
       res = -DBL_MAX;
    }
    if(res!=-DBL_MAX)
    printf("%.2lf", res);
    return 0;
}
