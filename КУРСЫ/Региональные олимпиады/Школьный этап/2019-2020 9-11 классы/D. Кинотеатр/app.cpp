#include <bits/stdc++.h>

using namespace std;

string solve(int x, int y, string prev = "B")
{	
	string a, b;
	
	if (prev == "B")
	{
		a = "G";
		b = "B";
	}
	else
	{
		a = "B";
		b = "G";
	}
	
	if (x > y)
	{
		return "BGB" + solve(x - 2, y - 1, "B");
	}
	else if (y > x)
	{
		return "GBG" + solve(x - 1, y - 2, "G");
	}
	else
	{
		string s;
		
		for (int i = 0; i < x; i++)
		{
			s += a + b;
		}
		
		return s;
	}
}

int main()
{
	int x, y;
	
	cin >> x >> y;
	
	if (max(x, y) / min(x, y) <= 2)
		cout << solve(x, y);	
	else
		cout << "No solution";
	
	return 0;
}

