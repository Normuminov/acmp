#include <bits/stdc++.h>
 
using namespace std;

string decrypt(string message, const string &key);
bool has(const string &message, const string &key);
void next(char &c);
 
int main()
{
    string message, key;

	while (cin >> message >> key)
    	cout << decrypt(message, key) << endl;
    
    return 0;
}
 
string decrypt(string message, const string& key) {
     
    for (int i = 0; i < 26; i++)
        if (has(message, key))
            return message;
        else
            for (char &i : message)
                next(i);
     
    return "IMPOSSIBLE";
}

bool has(const string &message, const string &key) {
	return search (
		message.begin(),	message.end(),
		key.begin(),		key.end()
	) != message.end();
}
 
void next(char &c) {
    if (c == 'Z') c = 'A';
    else ++c;
}

