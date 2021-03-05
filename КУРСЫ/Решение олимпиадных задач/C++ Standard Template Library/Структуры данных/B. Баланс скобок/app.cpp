#include <bits/stdc++.h>

using namespace std;

ifstream fin("input.txt");
ofstream fout("output.txt");

bool is_valid(string s);
char opening(char c);

int main()
{
	string s;
	
	while (fin >> s)
		fout << !is_valid(s);
	
	return 0;
}

bool is_valid(string s) {
	stack<char> stack;
	
	if (s.length() % 2) return false;
	
	if (s.back() == '(' or
		s.back() == '[' or
		s.back() == '{')
		return false;
	
	for (auto &i : s)
		if (i == '(' or
			i == '[' or
			i == '{')
			stack.push(i);
		else
			if (stack.top() == opening(i))
				stack.pop();
			else
				return false;
	
	return true;
}

char opening(char c) {
	switch (c) {
		case ')': return '(';
		case ']': return '[';
		case '}': return '{';
	}
}

