#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <string>

using namespace std;

struct Point
{
	int x;
	int y;
	int z;
};

struct Cuboid
{
	Point points[2];
};

typedef int Node;
typedef vector<int> Line;
typedef vector<Line> Square;
typedef vector<Square> Cube;
typedef vector<Cuboid> Query;

int main()
{
	int h, n, m, q;

	// input size of the cube
	cin >> h >> n >> m >> q;

	Cube cube(h, Square(n, Line(m)));
	Line result;

	// input data to the cube
	for (auto& square : cube)
	{
		for (auto& line : square) {
			string s;

			cin >> s;

			for (int i = 0; i < m; i++)
				line[i] = s[i] - 48;
		}
	}

	int x1, y1, z1, x2, y2, z2, sum;

	// input coordinates of points x1, y1, z1, x2, y2, z2
	for (int i = 0; i < q; i++)
	{		
		// input x,y,z coordinates of each point
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;

		sum = 0;

		x1 -= 1;
		y1 -= 1;
		z1 -= 1;

		for (; x1 < x2; ++x1)
			for (; y1 < y2; ++y1)
				for (; z1 < z2; ++z1)
					sum += cube[x1][y1][z1];

		cout << sum << endl;
	}

	return 0;
}

