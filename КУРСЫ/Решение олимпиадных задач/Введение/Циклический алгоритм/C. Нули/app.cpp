#include <iostream>

int main()
{
	std::string s;
	int max = 0, count = 0, prev = -1;
	
	std::cin >> s;
	
	for (auto i : s)
		if (i == '0')
			++count;
		else
		{
			if (count > max)
				max = count;
			
			count = 0;
		}
		
	if (count > max)
		max = count;
	
	std::cout << max;
	
	return 0;
}

