#include <iostream>
#include <stack>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool funcpr(string str) 
{
	std::stack <char> symb;
	for (int i = 0; i < str.length(); i++) 
	{
		if (str[i] == '{' or str[i] == '(' or str[i] == '[') 
		{
			symb.push(str[i]);
		}
		if (str[i] == '}') 
		{
			if (symb.empty() == 1) return 0;
			if ('{' == symb.top()) symb.pop();
			else return 0;
		}
		if (str[i] == ')') 
		{
			if ('(' == symb.top()) symb.pop();
			else return 0;
		}
		if (str[i] == ']') 
		{
			if ('[' == symb.top()) symb.pop();
			else return 0;
		}
	}
	if (symb.empty() == 1) return 1;
	else return 0;
}

int main()
{
	string a;
	cout << "vvedite stroku\n\n";
	cin >> a;

	if (funcpr(a) == 1)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	
}