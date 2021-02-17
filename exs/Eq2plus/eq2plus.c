#include <stdio.h>
#include <math.h>

void power_to(){
    printf("teste\n");
}

int main() {
    double base, exp, result;

    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);


    result = pow(base, exp);
    printf("%.1lf^%.1lf = %.2lf\n", base, exp, result);
    return 0;
}
