#include "AbstractOperation.hpp"
#include "Operation.hpp"
#include "RPNCalculator.hpp"

using namespace std;

int main()
{
	std::cout << "Enter your formula:\n";
	std::string formula;
	std::getline(std::cin, formula);
	std::cout << "You entered " << formula << std::endl;
	RPNCalculator calculator;
	int result = calculator.process_form(formula);
	//int result = 0;
	std::cout << "The result is:\n";
	std::cout << result << std::endl;
	system("pause");
}


