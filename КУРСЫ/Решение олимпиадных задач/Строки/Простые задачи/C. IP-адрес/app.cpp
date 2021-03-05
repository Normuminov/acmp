#include <bits/stdc++.h>

using namespace std;

struct IP
{
	string octet[4];
};

bool is_valid(string s);

int main()
{
	string ip;
	
	cin >> ip;
	
	if (is_valid(ip))
		cout << "Good";
	else
		cout << "Bad";
	
	return 0;
}

bool is_valid(string s) {
	IP ip;
	
	int i = 0;
	for (char& c : s)
		if (c == '.') {
			i++;
			continue;
		} else
			ip.octet[i] += c;
	
	try {
		for (auto& octet : ip.octet)
			if (octet == "")
				return false;
			else if (stol(octet) > 255)
				return false;
	} catch (...) {
		return false;
	}
			
	return true;
}

