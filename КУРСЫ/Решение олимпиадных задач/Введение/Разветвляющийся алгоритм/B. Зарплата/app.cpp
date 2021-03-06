#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	
	vector<int> e;
	
	for (int i = 0, value; i < 3; e.push_back(value), ++i)
		cin >> value;
		
	cout << *max_element(e.begin(), e.end()) - *min_element(e.begin(), e.end());
	
	return 0;
}

