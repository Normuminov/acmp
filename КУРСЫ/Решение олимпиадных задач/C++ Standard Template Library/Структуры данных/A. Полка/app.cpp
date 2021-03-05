#include <bits/stdc++.h>

using namespace std;

typedef deque<int> Shelf;

int main()
{
	Shelf shelf;
	int n, op, num = 0;
	
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> op;
		
		switch (op)	{
			case 1:
				cin >> num;
				shelf.push_front(num);
				break;
			case 2:
				cin >> num;
				shelf.push_back(num);
				break;
			case 3:
				cout << shelf.front() << endl;
				shelf.pop_front();
				break;
			case 4:
				cout << shelf.back() << endl;
				shelf.pop_back();
				break;
		}
	}
	
	return 0;
}

