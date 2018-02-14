#pragma once
#include <iostream>
#include <string>

using namespace std;

class AbstractOperation
{	
	AbstractOperation one_parameter(char param);
	char get_code();
	virtual void ˜AbstractOperation();

	private:
		char operation_type;
};