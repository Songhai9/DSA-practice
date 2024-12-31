#include "calc-io.h"
#include <math.h>

void printResult(double a, double b, char op) {
    double res;

    switch(op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        case '/':
            res = a / b;
            break;
        case '^':
            res = pow(a, b);
            break;
    }

    printf("%lf %c %lf = %lf", a, op, b, res);
}