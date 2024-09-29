#include <iostream>
#include "TestMonster.h"
#include <memory>

using namespace std;

int main()
{
	int a = 300;
	int b = 2;


	int c = a + b;
	cout << c << endl;
	int d = 0;


	int Branch2Test = 100;
	cout << Branch2Test << endl;

	shared_ptr<TestMonster> testmonster = make_shared<TestMonster>(a, b);
	

	return 0;
}