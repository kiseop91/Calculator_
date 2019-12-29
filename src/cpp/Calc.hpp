#pragma once

class Calc {
private:
	static Calc* m_Inst;

public:
	static Calc* GetInst();
	bool init();
	void Destroy();

private:
	Calc();
	~Calc();

public:
	int add(int val1, int val2);
	int sub(int val1, int val2);
	int mul(int val1, int val2);
	float div(int val1, int val2);
};