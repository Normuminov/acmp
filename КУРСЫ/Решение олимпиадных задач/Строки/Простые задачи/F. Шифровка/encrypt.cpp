#include <bits/stdc++.h>

using namespace std;

string encrypt(string message, const int &n);

int main()
{
	string message;
	int n;
	
	while (cin >> message >> n)
		cout << encrypt(message, n) << endl;

	return 0;
}

string encrypt(string message, const int &n) {
	for (auto &i : message)
		if (i + n > 90)
			i = 63 + (i + n - 89);
		else
			i += n;
	
	return message;
}

