#include <bits/stdc++.h>

using namespace std;

int main()
{
	string n;
	int count = 0;
	
	cin >> n;
	
	for (auto &i : n)
		if (i == '0')
			count++;
			
	cout << count;
	
	return 0;
}

