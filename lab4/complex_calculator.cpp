#include "calculator.h"

int Calculator::ComplexExpression (double a, double b)
{
    return Add(Add(a, b), Mul(a, b));
}
