#include <iostream>

int main()
{
    long long n, m, count = 0;

    std::cin >> n >> m;

    int i = 2;
    while (n != 1 or m != 1)
    {
        if (n % i == 0)
        {
            if (m % i == 0)
            {
                n /= i;
                m /= i;
            }
            else
            {
                n /= i;
                count++;
            }
        }
        else
        {
            if (m % i == 0)
            {
                m /= i;
                count++;
            }
            else
            {
                i++;
            }
        }
    }

    std::cout << count;

    return 0;
}
