#include <iostream>

using namespace std;

int main() {
	
	long S, petya, katya, sereja;
	
	cin >> S;
	
	petya = sereja = S / 6;
	
	katya = S - petya - sereja;
	
	cout << petya << endl;
	cout << katya << endl;
	cout << sereja << endl;
	
	return 0;
}

