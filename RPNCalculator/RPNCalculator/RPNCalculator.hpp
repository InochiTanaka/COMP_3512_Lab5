#pragma once
#include "AbstractOperation.hpp"
#include "AdditionOperation.hpp"
#include "DivisionOperation.hpp"
#include "MultiplicationOperation.hpp"
#include "Operation.hpp"
#include "SubtractionOperation.hpp"

#include <stack> 

class RPNCalculator 
{
	private:
		int result;
		std::stack<int> st;
		size_t stackTop;
		void perform(int *link)
		{};
	
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
			std::cout << "testing"<< std::endl;

			Operation * opr;
			int numA;
			int numB;

			for (int i = 0; i <= formula.size() - 1; i++)
			{
				if (isdigit(formula[i]))
				{
					st.push((int)formula[i] - (int)'0');
				}
				else
				{
					opr = operation_type(formula[i]);
					numB = st.top();
					st.pop();
					numA = st.top();
					st.pop();

					result = opr->perform(numA, numB);
					st.push(result);
				}
			}

			return st.top();
		};
};