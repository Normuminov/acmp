#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <cmath>

using namespace std;

bool comp(short next, short first);

int main()
{
	vector<short> nums;
	short n, k, count = 0;

	cin >> n >> k;
	
	// put numbers 1 to n in nums
	nums.resize(n);
	iota(nums.begin(), nums.end(), 1);

	do
	{
		if (is_sorted(nums.begin(), nums.end(), 
			[k](short next, short first)
			{
				return (abs(next - first) <= k);
			}
		))
		{
			count++;
		}

	} while (next_permutation(nums.begin(), nums.end()));

	cout << count;

	return 0;
}

bool comp(short next, short first)
{
	return (abs(next - first) <= 2);
}

