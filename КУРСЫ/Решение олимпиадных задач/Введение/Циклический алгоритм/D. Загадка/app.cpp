#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
	int s, p;
	int x, y;
	
	std::cin >> s >> p;
	
	x = (s + sqrt(s*s - 4*p)) / 2;
	y = s - x;
	
	std::cout << std::min(x, y) << " " << std::max(x, y);
	
	return 0;
}

