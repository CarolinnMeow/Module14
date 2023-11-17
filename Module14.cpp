#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str1;
	getline(cin, str1);
	int lastCharIndex = str1.length() - 1;

	cout << "Current string: " << str1 << "\n";
	cout << "String's length: " << str1.length() << "\n";
	cout << "First symbol: " << str1.substr(0, 1) << "\n";
	cout << "Last symbol: " << str1.substr(lastCharIndex, 1) << "\n";
}

