#include <iostream>
using namespace std;

struct point
{
	int x;
	int y;
	int z;

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
	cout << "Odleg�o��" << DistanceFromCenter(x, y, z) << endl;

	int x1, y1;
	int x2, y2;

	int xx[50], yy[50], zz[50];
	xx[3] = 5;
	yy[3] = 7;
	zz[3] = 77;
	point firstPoint;
	firstPoint.x = 3;
	firstPoint.y = 5;
	firstPoint.z = 8;
	cout << "Odleg�o��" << DistanceFromCenter(firstPoint.x, firstPoint.y, firstPoint.z);
	cout << "Odleg�o��" << DistanceFromCenter(firstPoint) << endl;

	point tabOfPoints[15];
	tabOfPoints[2].y = 68;

}
