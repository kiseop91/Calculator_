#pragma once

class Calc {
public:
	static Calc* m_Inst;
	static Calc* GetInst();
	void Destroy();

private:
	Calc();
	~Calc();

public:
	int add(int val1, int val2);
	int sub(int val1, int val2);
	int mul(int val1, int val2);
	int div(int val1, int val2);
};