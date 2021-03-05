#include <bits/stdc++.h>

using namespace std;

bool is_prime(int n);

int main()
{
	vector<int> v;
	int n;
	
	cin >> n;
	
	for (int i = 1; i <= n; i++)
		v.push_back(i);
	
	for (auto i = v.rbegin(); i != v.rend(); )
	{
		for (auto j = v.begin(); j != v.end(); )
		{
			if (is_prime(*i + *j))
			{
				cout << *i << " " << *j << endl;
				
				v.erase((i++ + 1).base());
				v.erase(j++);
			} 
			else 
			{
				++i;
				++j;
			}
		}
	}
	
	return 0;
}

bool is_prime(int n)
{
	if (n == 1)
		return false;
	
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
	
	return true;
}

