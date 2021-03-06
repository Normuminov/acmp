#include <iostream>

long long gcd(long long a, long long b);

using namespace std;

int main() {
	
	long long n, m;
	
	cin >> n >> m;
	
	for (int i = 0; i < gcd(n, m); ++i)
		cout << 1;
	
	return 0;
}

long long gcd(long long a, long long b) {
	
	if (a == 0) return b;
	if (b == 0) return a;
	
	return gcd(b, a % b);
}

