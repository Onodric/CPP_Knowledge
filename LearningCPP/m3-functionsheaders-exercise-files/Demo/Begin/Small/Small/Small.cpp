#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
	auto a = add(3, 4);
	cout << "3 + 4 is " << a;

	cout << endl;

	double b = add(1.7, 3.7, 1);
	cout << "1.7 + 3.7 + 1 is " << b;
	return 0;
}
