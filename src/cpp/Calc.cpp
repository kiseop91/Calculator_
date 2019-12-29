#include "Calc.hpp"
#include <iostream>

Calc* Calc::m_Inst = nullptr;

Calc * Calc::GetInst()
{
	if (m_Inst == nullptr)
		return m_Inst = new Calc;
	return m_Inst;
}

void Calc::Destroy()
{
	if (m_Inst != nullptr)
		delete m_Inst;
}

Calc::Calc()
{
}

Calc::~Calc()
{
}

int Calc::add(int val1, int val2)
{
	int ret = val1 + val2;
	std::cout << ret << std::endl;
	return ret;
}

int Calc::sub(int val1, int val2)
{
	int ret = val1 - val2;
	std::cout << ret << std::endl;
	return ret;
}

int Calc::mul(int val1, int val2)
{
	int ret = val1 * val2;
	std::cout << ret << std::endl;
	return ret;
}

int Calc::div(int val1, int val2)
{
	if (val2 == 0) {
		std::cout << "impossible div with 0" << std::endl;
		return -1;
	}
	int ret = val1 / val2;
	std::cout << ret << std::endl;
	return ret;
}
