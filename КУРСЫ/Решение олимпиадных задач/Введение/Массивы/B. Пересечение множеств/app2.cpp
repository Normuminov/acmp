#include <iostream>
#include <algorithm>
#include <vector>

void input(std::vector<long long>& s, long long size);

int main()
{
	std::vector<long long> first, second, result;
	long long n, m;
	
	std::cin >> n >> m;
	
	input(first, n);
	input(second, m);
	
	std::sort(first.begin(), first.end());
	std::sort(second.begin(), second.end());
	
	result.assign(std::max(first.size(), second.size()), 0);
	
	auto end = std::set_intersection(first.begin(), first.end(), second.begin(), second.end(), result.begin());
	
	result.resize(end - result.begin());
	
	for (auto i : result)
		std::cout << i << " ";
	
	return 0;
}

void input(std::vector<long long>& s, long long size)
{
	for (long long i = 0, value; i < size; ++i)
	{
		std::cin >> value;
		
		s.push_back(value);
	}
}

