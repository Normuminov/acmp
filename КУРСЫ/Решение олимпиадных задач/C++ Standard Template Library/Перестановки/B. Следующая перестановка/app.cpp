#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> v;
	int n;
	
	cin >> n;	
	
	for (int i = 0, value; i < n; i++)
	{
		cin >> value;
		v.push_back(value);
	}
	
	next_permutation(v.begin(), v.end());
	
	for (auto i : v)
	{
		cout << i << " ";
	}
	
	return 0;
}

