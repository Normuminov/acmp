#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int n;
	std::vector<int> w;
	
	std::cin >> n;
	
	for (int i = 0, value; i < n; ++i)
	{
		std::cin >> value;
		
		w.push_back(value);
	}
	
	std::cout << *std::min_element(w.begin(), w.end()) << " " << *std::max_element(w.begin(), w.end());
	
	return 0;
}

