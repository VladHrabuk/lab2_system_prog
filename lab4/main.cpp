#include "calculator.h"
#include <iostream>
using namespace std;

int main()
{
	Calculator my_calc;

        int calc_result = my_calc.ComplexExpression(6.2, 8.8);

	std::cout << "Result: " << calc_result << std::endl;

    	return 0;
}
