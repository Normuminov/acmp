#include <iostream>

long long gcd(long long, long long);
long long lcm(long long, long long);

using namespace std;

int main() {
	
	long long n, m;
	
	cin >> n >> m;
		
	if (m % n)
		cout << lcm(n, m) / m;
	else
		cout << 1;
	
	return 0;
}

long long gcd(long long a, long long b) {
	
	if (a == 0) return b;
	if (b == 0) return a;
	
	return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
	return (a * b) / gcd(a, b);
}


