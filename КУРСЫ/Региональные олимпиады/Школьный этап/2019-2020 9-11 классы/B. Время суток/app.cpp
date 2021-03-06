#include <bits/stdc++.h>

using namespace std;

int main()
{
	string time;
	int hour, minute;
	
	cin >> time;
	
	hour	= stoi(time.substr(0, 2));
	minute	= stoi(time.substr(3, 2));
	
	if (hour < 4 or (hour == 4 and minute < 30))
		cout << "night";
	else if (hour < 11 or (hour == 11 and minute < 30))
		cout << "morning";
	else if (hour < 15 or (hour == 15 and minute < 30))
		cout << "day";
	else if (hour < 23 or (hour == 23 and minute < 30))
		cout << "evening";
	else
		cout << "night";
	
	return 0;
}

