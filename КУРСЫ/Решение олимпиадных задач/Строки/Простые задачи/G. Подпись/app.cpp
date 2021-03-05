#include <bits/stdc++.h>
#include <locale>

using namespace std;

locale loc;

string solve(string first, const string second);
void lower(string &s);

int main()
{
	string name1, name2, first, second;
	
	cin >> name1 >> name2;
	
	first	= solve(name1, name2);
	second	= solve(name2, name1);
	
	if (first < second)
		cout << first;
	else
		cout << second;
	
	return 0;
}

string solve(string name1, string name2) {
	
	string
		first	= tolower(name1, loc),
		second	= tolower(name2, loc);
	
	for (int i = 1; i <= second.length() and i <= first.length(); i++)
		if (first.substr(first.length() - i) == second.substr(0, i))
			name1.insert(i, name2);
	
	return first;
}

void lower(string &s) {
	for (auto &c : s)
		c = tolower(c);
}

