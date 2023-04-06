#include <stdio.h>
#include <math.h>

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    
    return a / b;
}

double power(double a, double b)
{
    return pow(a, b);
}

double squareRoot(double a)
{
    return sqrt(a);
}

int main() {
    double a, b, result;
    char o;

    
    scanf("%lf %c %lf", &a, &o, &b);

    if (o == '+') {
        result = add(a, b);
        printf(" %lf", result);
    }
    else if (o == '-') {
        result = subtract(a, b);
        printf(" %lf", result);
    }
    else if (o == '*') {
        result = multiply(a, b);
        printf(" %lf", result);
    }
    else if (o == '/') {
        result = divide(a, b);
        printf(" %lf", result);
    }
    else if (o == '^') {
        result = power(a, b);
        printf("%lf", result);
    }
    else if (o == 's') {
        result = squareRoot(a);
        printf(" %lf", result);
    }
    else {
        printf("Error\n");
    }

    return 0;
}
 

