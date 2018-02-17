#pragma once
#include "AbstractOperation.hpp"

class DivisionOperation : public AbstractOperation
{
	public:
		static const char OPERATION_CODE = '/';

		DivisionOperation() : AbstractOperation(OPERATION_CODE) {}

		int perform(int numA, int numB)
		{
			return numA / numB;
		}

		char get_code()
		{
			return OPERATION_CODE;
		}

		virtual ~DivisionOperation()
		{}
};