#pragma once
#include <iostream>
#include <string>

using namespace std;

class AbstractOperation : public Operation 
{	
	//public:
		AbstractOperation(const char param)
		{
			operation_type = param;
		};

		char get_code() override
		{
			return operation_type;
		};

		virtual ~AbstractOperation()
		{};

	private:
		char operation_type;
};