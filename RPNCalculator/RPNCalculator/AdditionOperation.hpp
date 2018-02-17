#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation
{ 
	public:
		static const char OPERATION_CODE = '+';

		AdditionOperation() : AbstractOperation(OPERATION_CODE) {} 

		int perform(int numA, int numB)
		{
			return numA + numB;
		}

		char get_code()
		{
			return OPERATION_CODE;
		}

		virtual ~AdditionOperation()
		{};
};