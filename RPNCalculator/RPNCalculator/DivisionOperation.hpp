#pragma once
#include "AbstractOperation.hpp"

class DivisionOperation : public AbstractOperation
{
	public:
		static const char DIVISION_CODE = '/';

		DivisionOperation() : AbstractOperation(DIVISION_CODE) {}

		int perform(int numA, int numB)
		{
			return numA / numB;
		}

		char get_code()
		{
			return DIVISION_CODE;
		}

		virtual ~DivisionOperation()
		{}
};