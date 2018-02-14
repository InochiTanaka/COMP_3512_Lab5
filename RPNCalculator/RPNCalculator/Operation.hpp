#pragma once

class Operation 
{
	public:
		virtual char get_code();
		virtual int perform(int numA, int numB);
		virtual void ˜Operation();
};