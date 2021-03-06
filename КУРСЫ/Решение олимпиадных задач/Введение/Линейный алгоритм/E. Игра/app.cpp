#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	int k, n;
	
	cin >> k;
	
	n = k * 100 + 90 + abs(9 - k);
	
	cout << n;	
	
	return 0;
}

