#pragma once

class Operation 
{
	public:
		virtual char get_code() = 0;
		virtual int perform(int numA, int numB) = 0;
		virtual ~Operation()
		{};
};