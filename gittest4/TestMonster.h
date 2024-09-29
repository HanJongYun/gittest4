#pragma once



class TestMonster
{
public:
	TestMonster(int a, int b);
	~TestMonster();

	inline int GetValueA() { return valueA; }
	inline int GetValueB() { return valueB; }

private:
	int valueA;
	int valueB;
};

