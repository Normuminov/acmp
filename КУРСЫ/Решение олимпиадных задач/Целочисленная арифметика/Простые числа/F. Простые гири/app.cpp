#include <bits/stdc++.h>

using namespace std;

bool is_prime(int a);

int main()
{
	vector<int> nums;
	int n;
	
	cin >> n;
	
	vector<int> first(n/2), second(n/2);
	
	for (int i = 1; i <= n; i++)
	{
		nums.push_back(i);
	}
	
	remove_copy_if(nums.rbegin(), nums.rend(), first.begin(), [&nums, &second](int i) {
		i =* remove_copy_if(nums.begin(), nums.end(), second.begin(), [i](int j) {
			is_prime(i + j);
		});
	});
	
	remove(first.begin(), first.end(), 0);
	remove(second.begin(), second.end(), 0);
	
	for (auto i = first.begin(), j = second.begin(); i != first.end(); ++i, ++j)
	{
		cout << *i << " " << *j << endl;
	}
	
	return 0;
}

bool is_prime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	
	return true;
}

