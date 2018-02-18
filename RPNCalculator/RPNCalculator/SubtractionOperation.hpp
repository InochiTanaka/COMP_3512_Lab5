#pragma once
#include "AbstractOperation.hpp"

class  SubtractionOperation : public AbstractOperation
{
	public:
		static const char SUBTRACTION_CODE = '-';

		SubtractionOperation() : AbstractOperation(SUBTRACTION_CODE) {}

		int perform(int numA, int numB)
		{
			return numA - numB;
		}

		char get_code()
		{
			return SUBTRACTION_CODE;
		}

		virtual ~SubtractionOperation()
		{};
};