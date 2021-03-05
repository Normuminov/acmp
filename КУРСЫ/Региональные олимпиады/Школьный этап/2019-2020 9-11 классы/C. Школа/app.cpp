#include <bits/stdc++.h>

using namespace std;

int main()
{
	int as, bs, cs,
		ab, ac,
		bc;
	
	cin >> as >> bs >> ac >> bc;
	
	ab = abs(as - bs);
	
	if (ac + bc == ab)
		if (as > bs)
			cout << bs + bc;
		else
			cout << as + ac;
	else if (ab + bc == ac)
		if (as > bs)
			cout << bs - bc;
		else
			cout << bs + bc;
	else if (ac + ab == bc)
		if (as > bs)
			cout << as + ac;
		else
			cout << as - ac;
	else
		cout << "No solution";
	
	return 0;
}

