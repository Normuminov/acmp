#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Conditioner
{
	Conditioner(short power = 0, short price = 0)
	{
		this->power = power;
		this->price = price;
	}

	short power, price;
};

int main()
{
	vector<short> classes;
	vector<Conditioner> conditioners;
	unsigned short n, m;
	long price = 0;

	cin >> n;

	short value1, value2;

	// input classes
	for (unsigned short i = 0; i < n; i++)
	{
		cin >> value1;
		classes.push_back(value1);
	}

	cin >> m;

	// input conditioners
	for (unsigned short i = 0; i < m; i++)
	{
		cin >> value1 >> value2;
		conditioners.push_back(Conditioner(value1, value2));
	}

	// sort conditioners first by power, then by price
	sort (conditioners.begin(), conditioners.end(), [&conditioners](Conditioner& c1, Conditioner& c2) {
		if (c1.price == c2.price)
		{
			if (c1.power > c2.power)
			{
				c1.~Conditioner();
				return false;
			}
			else
			{
				c2.~Conditioner();
				return true;
			}
		}

		return c1.price < c2.price;
	});

	unique (conditioners.begin(), conditioners.end(), 
		[](Conditioner& c1, Conditioner& c2)
		{
			return (c1.power == c2.power and c1.price <= c2.price);
		}
	);

	Conditioner conditioner;

	// find minimum total price
	for (const auto& c : classes)
	{
		conditioner = *find_if(conditioners.begin(), conditioners.end(), 
			[&conditioners, &c](Conditioner& conditioner) {
				return conditioner.power >= c;
			});

		price += conditioner.price;
	}

	cout << price;

	return 0;
}

