#include <iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	int z;

public:
	Point()
{
		x = 3;
		y = 7;
		z = 10;
}

	Point(int xx)
	{
		x = xx;
		y = 7;
		z = 10;
	}

	Point(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	void SetX(int value)
	{
		//x = abs(value);
		if (value >= 0)
			x = value;
		else {
			//reakcja na b³¹d
		}

	}

	int GetX()
	{
		//if (uprawnienia)
		return x;  
	}
};

double DistaneFromcenter(point p)
{
	double distance;
	distance = sqrt(p.x * p.x + p.y * p.y + p.z + p.z);
	return distance;
}

int main()
{
	setlocale(LC_CTYPE, "polish");

	int x, y, z;

	cout << "podaj x" << endl;
	cin >> x;
	cout << "podaj y" << endl;
	cin >> y;
	cout << "podaj z" << endl;
	cin >> z;
	cout << "Odleg³oœæ" << DistanceFromCenter(x, y, z) << endl;

	int x1, y1;
	int x2, y2;

	int xx[50], yy[50], zz[50];
	xx[3] = 5;
	yy[3] = 7;
	zz[3] = 77;
	Point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;
	cout << "Odleg³oœæ" << DistanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z);
	cout << "Odleg³oœæ" << DistanceFromCenter(firstPoint) << endl;

	Point tabOfPoints[15];
	tabOfPoints[2].y = 68;

	Point secondpoint(15);
	cout << "Odleg³oœc" << secondPoint.DistanceFromCenter() << endl;   

}
