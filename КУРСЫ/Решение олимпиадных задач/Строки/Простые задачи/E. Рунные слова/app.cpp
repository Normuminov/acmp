#include <bits/stdc++.h>

using namespace std;

bool is_capital(char& c);
bool is_ok(string& s);

int main()
{
	string s;
	
	cin >> s;
	
	if (is_ok(s))
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}

bool is_capital(char& c) {
	if (64 < c and c < 91) return true;
	else return false;
}

bool is_ok(string& s) {
	int n = 5;
	
	if (is_capital(s.back())) return false;
	
	for (char &c : s)
		if (is_capital(c))
			if (n != 1) n = 1;
			else return false;
		else if (n++ > 3)
			return false;
	
	return true;
}

