#pragma once
#include "AbstractOperation.hpp"

class AdditionOperation : public AbstractOperation
{ 
	public:
		static const char ADDITION_CODE = '+';

		AdditionOperation() : AbstractOperation(ADDITION_CODE) {}

		int perform(int numA, int numB)
		{
			return numA + numB;
		}

		char get_code()
		{
			return ADDITION_CODE;
		}

		virtual ~AdditionOperation()
		{};
};