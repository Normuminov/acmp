#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, count = 0;
	vector<long long> v;
	
	cin >> n;
	
	for (int i = 0, value; i < n; i++)
	{
		cin >> value;
		v.push_back(value);
	}
	
	for (auto first = v.begin(); end != v.begin(); end--)
	{
		for (auto current = v.begin(), next = v.begin() + 1; next != end; current++, next++)
		{
			if (*current > *next)
			{
				auto temp = *next;
				*next = *current;
				*current = temp;
				count++;
			}
		}
	}
	
	cout << count;
	
	return 0;
}

