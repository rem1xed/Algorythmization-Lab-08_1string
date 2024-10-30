#include <iostream>
#include <string>
using namespace std;
int Count(const string s)
{
	int k = 0;
	size_t pos = 0;
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		if (s[i] == '+' ||
			s[i] == '-'||
			s[i] == '=') {
			k++;
		}	
	}
	return k;
}
string Change(string& s)
{
	size_t pos = 0;
	string findS = "+-=";
	for (int i = 0; i < s.size(); i++) {
			if (s[i + 1] == '+' && s[i] == '+'||
				s[i + 1] == '-' && s[i] == '-'||
				s[i + 1] == '=' && s[i] == '=')
				s.replace(i, 2, "***");
	}
	return s;
}
int main()
{
	string str;
	cout << "Enter string:" << endl;
		getline(cin, str);
	cout << "String contained " << Count(str) << "elements: '+', '-', '='" << endl;
	string dest = Change(str);
	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;
	return 0;
}