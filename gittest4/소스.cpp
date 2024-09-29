#include <iostream>
#include "TestMonster.h"
#include <memory>

using namespace std;

int main()
{
	int a = 1;
	int b = 2;


	int c = a + b;
	cout << c << endl;
	int d = 0;

	shared_ptr<TestMonster> testmonster = make_shared<TestMonster>(a, b);
	


	return 0;
}