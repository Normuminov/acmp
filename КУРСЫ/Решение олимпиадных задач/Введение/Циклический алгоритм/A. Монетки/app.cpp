#include <iostream>
#include <algorithm>

int main()
{
	int n, c1 = 0, c2 = 0;
	
	std::cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		int value;
		
		std::cin >> value;
		
		switch (value)
		{
			case 0: ++c1; break;
			case 1: ++c2; break;
		}
	}
	
	std::cout << n - std::max(c1, c2);
	
	return 0;
}

