#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	bool uc = false, lc = false, n = false;
	
	cin >> s;
	
	for (auto &i : s)
		if (64 < i and i < 91)
			uc = true;
		else if (96 < i and i < 123)
			lc = true;
		else if (47 < i and i < 58)
			n = true;
	
	if (uc and lc and n and s.length() > 11)
		cout << "Yes";
	else
		cout << "No";
	
	return 0;
}

