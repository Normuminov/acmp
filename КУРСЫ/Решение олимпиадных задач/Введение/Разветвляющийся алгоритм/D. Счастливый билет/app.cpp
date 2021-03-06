#include <iostream>

using namespace std;

bool is_lucky(const string& n);
int sum(const string& n);
int value(const char& c);

int main() {
	
	string n;
	
	cin >> n;
	
	cout << (is_lucky(n) ? "YES" : "NO");
	
	return 0;
}

bool is_lucky(const string& n) {
	if (sum(n.substr(0, 3)) == sum(n.substr(3, 3)))
		return true;
	else
		return false;
}

int sum(const string& n) {
	int sum = 0;
	
	for (auto& i : n)
		sum += value(i);
	
	return sum;
}

int value(const char& c) {
	return c - 48;
}

