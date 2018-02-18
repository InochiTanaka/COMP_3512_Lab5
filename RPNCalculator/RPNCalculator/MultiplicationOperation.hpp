#pragma once
#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstractOperation
{
	public:
		static const char MULTIPLICATION_CODE = '*';

		MultiplicationOperation() : AbstractOperation(MULTIPLICATION_CODE) {}

		int perform(int numA, int numB)
		{
			return numA * numB;
		}

		char get_code()
		{
			return MULTIPLICATION_CODE;
		}

		virtual ~MultiplicationOperation()
		{};
};