﻿#pragma once
#include "AbstractOperation.hpp"

class MultiplicationOperation : public AbstractOperation
{
	static const char OPERATION_CODE = '*';

	int perform(int numA, int numB)
	{
		return numA * numB;
	}

	char get_code()
	{
		return OPERATION_CODE;
	}

	virtual ~MultiplicationOperation()
	{};
};