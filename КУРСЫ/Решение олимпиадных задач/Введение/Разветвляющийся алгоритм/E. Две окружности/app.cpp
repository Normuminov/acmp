#include <iostream>
#include <cmath>

double distance(double, double, double, double);

int main()
{
	double
		x1, y1, r1,
		x2, y2, r2,
		d;
		
	std::cin >> x1 >> y1 >> r1;
	std::cin >> x2 >> y2 >> r2;
	
	d = distance(x1, y1, x2, y2);
	
	if ((r1 + r2 >= d ) and
		(r1 + d  >= r2) and
		(r2 + d  >= r1))
		std::cout << "YES";
	else
		std::cout << "NO";
		
	
	return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
	return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

