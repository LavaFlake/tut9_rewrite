#include <iostream>
#include "io.h"
#include "math.h"

int main() {
	int input1	{getUserInput()};
	int op		{getMathOperator()};
	int input2	{getUserInput()};

	int result	{calculateResult(input1, op, input2)};

	printResult(result);

	return 0;
}
