#pragma once
#include "AbstractOperation.hpp"
#include "AdditionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "SubtractionOperation.hpp"

#include <stack> 

class RPNCalculator 
{
	private:
		int result;
		std::stack<int> st;
		void perform(Operation * opr)
		{
			int numA;
			int numB;

			numB = st.top();
			st.pop();
			numA = st.top();
			st.pop();

			result = opr->perform(numA, numB);

			st.push(result);
		};
	
	public:
		Operation* operation_type(char oper) const
		{
			switch (oper)
			{
				case '+':	
					return new AdditionOperation;
					 
				case '-':
					return new SubtractionOperation;

				case '*':
					return new MultiplicationOperation;

				case '/':
					return new DivisionOperation;

				default:
					std::cout << "Encounted unknown operator";
					break; //Throw
			}
		};

		int process_form(std::string  formula)
		{
			char tempChar;
			int tempInt;

			std::istringstream iss(formula);
			std::string operand;

			while (iss >> operand)
			{	
				std::istringstream iss2(operand);

				if (iss2 >> tempInt)
				{
					st.push(tempInt);
				}
				else
				{
					perform(operation_type(operand[0]));
				}
			}

			return st.top();
		};
};