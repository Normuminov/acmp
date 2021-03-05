#include <iostream>
#include <string>
#include <list>
 
void factorise(int);
 
int main()
{
 
    int n;
 
    std::cin >> n;
 
    factorise(n);
 
    return 0;
}
 
void factorise(int n)
{
     
    std::list<int> primes;
    std::string result;
     
    for (int i = 2; i <= n; ++i)
    {
        auto current = prev(primes.end(), 1);
 
        for (auto previous = primes.begin(); previous != current; ++previous)
        {
            if (*current % *previous == 0)
            {
                primes.erase(current);
                break;
            }
        }
 
        primes.push_back(i);
         
        while (n % i == 0)
        {
            n /= i;
            result += std::to_string(i);
            result += "*";
        }
    }
     
    result.erase(--result.end());
     
    std::cout << result;
}

