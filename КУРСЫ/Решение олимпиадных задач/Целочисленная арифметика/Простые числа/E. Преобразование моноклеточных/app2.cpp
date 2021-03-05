#include <bits/stdc++.h>

using namespace std;

vector<long long> factorise(long long n);

int main()
{
    vector<long long> a;
    vector<long long> b;
    long long n, m, l = 0;
    
	cin >> n >> m;
     
    a = factorise(n);
    b = factorise(m);
    
	for (auto& i : a)
	{
        for (auto& j : b)
		{
            if (i == j)
			{
                i = 0;
                j = 0;
                l++;
                break;
            }
        }
    }
    
    cout << a.size() + b.size() - 2*l;
    
    return 0;
}

vector<long long> factorise(long long n)
{
	vector<long long> factors;
	
	int i = 2;
    
    while (i <= sqrt(n))
	{
        if (n % i == 0)
		{
            factors.push_back(i);
            n /= i;
        }
        else
		{
            i++;
        }
    }
    
    if (n > 1)
    {
        factors.push_back(n);
    }
    
    return factors;
}

