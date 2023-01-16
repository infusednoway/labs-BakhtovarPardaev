#include <iostream>
#include <deque>
#include <string>

using namespace std;


bool funcpol(string str) 
{
	deque <char> pol;
	for (int i = 0; i < str.length(); i++) str[i] = tolower(str[i]);
	  for (int i = 0; i < str.length(); i++) pol.push_back(str[i]);
	   for (int i = 0; i < str.length() / 2; i++) 
	   {
		  if (pol.size() == 1) return 1;
		   if (pol.front() == ' ') pol.pop_front();
		    if (pol.back() == ' ') pol.pop_back();
		     if (pol.back() == pol.front()) 
		     {
			   if (pol.size() == 1) return 1;
			    pol.pop_front();
			     pol.pop_back();
		     }
		  else return 0;
	   }
	   return 1;
}

int main()
{
	string str;  
	cout << "vvedite stroku\n";
	getline(cin, str);

	if (funcpol(str) == 1)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	
	return 0;
}