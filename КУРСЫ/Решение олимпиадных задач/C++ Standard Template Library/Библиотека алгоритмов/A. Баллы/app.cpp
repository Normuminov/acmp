#include <bits/stdc++.h>

using namespace std;

typedef long long node;
typedef vector<node> container;

void input(container& container, int& size);
void input(container& container, int& size);

int main()
{
	container student;
	container score;
	int n, k;
	
	cin >> n >> k;
	
	input(student, n);
	input(score, k);
	
	sort(student.begin(), student.end());
	
	for_each (score.begin(), score.end(), [&student](node& i) 
	{
		if (binary_search (student.begin(), student.end(), i))
		{
			cout << "YES ";
		}
		else
		{
			cout << "NO ";
		}
	});
	
	return 0;
}

void input(container& container, int& size)
{
	node value;
	
	for (int i = 0; i < size; i++)
	{
		cin >> value;
		container.push_back(value);
	}
}

