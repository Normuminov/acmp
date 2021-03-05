#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	int n;
	
	std::cin >> n;
	
	for (int i = 0, value; i < n; ++i)
	{		
		std::cin >> value;
		
		v.push_back(value);
	}
	
	for (auto i = v.crbegin(); i != v.crend(); ++i)
		std::cout << *i << " ";
	
	return 0;
}

