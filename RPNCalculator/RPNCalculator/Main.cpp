#include "AbstractOperation.hpp"
#include "Operation.hpp"

int main()
{
	std::cout << "Enter your formula:\n";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_formula(formula);
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
}

char Operation::get_code()
{
}

int Operation::perform(int numA, int numB)
{
	return 0;
}

int Operation::˜Operation()
{
	return 0;
}

AbstractOperation AbstractOperation::one_parameter(char param)
{
	operation_type = param;
}

char AbstractOperation::get_code()
{
	return operation_type;
}
