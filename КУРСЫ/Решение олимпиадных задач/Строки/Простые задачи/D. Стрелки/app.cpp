#include <bits/stdc++.h>

using namespace std;

int main()
{
	string string, arrow1 = "<--<<", arrow2 = ">>-->";
	int count = 0;
	
	cin >> string;
	
	for (auto it = string.begin() - 1; it != string.end(); ) {
		it = search(
			it + 1,				string.end(),
			arrow1.begin(), arrow1.end()
		);
		
		if (it != string.end()) ++count;
	}
	
	for (auto it = string.begin() - 1; it != string.end(); ) {
		it = search(
			it + 1,			string.end(),
			arrow2.begin(), arrow2.end()
		);
		
		if (it != string.end()) ++count;
	}
	
	cout << count;
	
	return 0;
}

