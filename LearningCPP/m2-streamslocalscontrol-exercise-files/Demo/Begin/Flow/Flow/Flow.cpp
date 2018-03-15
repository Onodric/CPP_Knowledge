#include <iostream>

using namespace std;

int main()
{
	int i;
	int j = 7;
	bool keepgoing = true;

	while (keepgoing) {
		cout << "Guess a number: ";
		cin >> i;
		cout << endl;

		if (i < j)
		{
			cout << "Your guess, " << i << ", is less than my number..." << endl;
		}
		if (i > j)
		{
			cout << "Your guess, " << i << ", is greater than my number..." << endl;
		}
		if (i == j)
		{
			keepgoing = false;
			cout << "Your guess, " << i << ", is equal to my number, " << j << endl;
			for (int loop = 10; loop > 0; loop--)
			{
				cout << loop << endl;
			}
			cout << "Done!" << endl;
		}
	}

	return 0;
}
