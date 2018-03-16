#include <iostream>
#include <string>

using namespace std;

int main()
{
	string word1;
	string word2;
	cout << "Give me one word: ";
	cin >> word1;
	cout << "Give me another word: ";
	cin >> word2;

	if (word1.length() > word2.length())
	{
		cout << "\"" << word1 << "\" is longer than \"" << word2 << "\"" << endl;
	}
	if (word1.length() < word2.length())
	{
		cout << "\"" << word1 << "\" is shorter than \"" << word2 << "\"" << endl;
	}
	if (word1.length() == word2.length())
	{
		cout << "\"" << word1 << "\" is the same length as \"" << word2 << "\"" << endl;
	}

	return 0;
}
