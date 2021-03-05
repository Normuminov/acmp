#include <iostream>
#include <algorithm>
#include <vector>

int profit(const std::vector<int>::iterator&, const std::vector<int>::iterator&);

int main()
{
	std::vector<int> c;
	int n;
	
	std::cin >> n;
	
	for (int i = 0, value; i < n; ++i)
	{
		std::cin >> value;
		c.push_back(value);
	}
	
	std::cout << profit(c.begin(), c.end());
	
	return 0;
}

int profit(const std::vector<int>::iterator& first, const std::vector<int>::iterator& last)
{
	if (first == last) return 0;
	
	auto max = std::max_element(first, last);
	
	return *max * (std::distance(first, max) + 1) + profit(std::next(max), last);
}

