#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

int main()
{
	std::vector<int> v1, v2;
	std::set<int> s;
	int n, m;
	
	std::cin >> n >> m;
	
	for (int i = 0, value; i < n; ++i)
	{
		std::cin >> value;
		v1.push_back(value);
	}
	
	for (int i = 0, value; i < m; ++i)
	{
		std::cin >> value;
		
		if (std::find(v1.begin(), v1.end(), value) != v1.end())
			v2.push_back(value);
	}
	
	std::sort(v2.begin(), v2.end());
	std::unique(v2.begin(), v2.end());
	
	for (auto i : v2)
		std::cout << i << " ";
	
	return 0;
}

