#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

vector<int> factorise(long long n);

int main()
{
    long long N, M;
	vector<int> v1, v2, difference;
	
    cin >> N >> M;
    
    v1 = factorise(N);
    v2 = factorise(M);
    
    set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), difference.begin());
    
    cout << difference.size();
    
    return 0;
}

vector<int> factorise(long long N)
{
	long long n = N, i = 2;
    vector<int> factors;
    
    while (i <= sqrt(N))
    {
        if (n % i == 0)
        {
            n /= i;
            factors.push_back(i);
        }
        else
        {
            i++;
        }
    }
    
    return factors;
}

