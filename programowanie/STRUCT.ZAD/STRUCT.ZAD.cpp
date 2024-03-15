#include <iostream>
using namespace std;

/*
Zdefiniuj klase opisuj�c� prostok�t. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra zw�rci obw�d prostok�ta
* metoda kt�ra pole prostok�ta
* metod� kt�ra poka�e informacje o prostok�cie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
*/

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
		else
		{
			//reakcja na b��d
		}
	}

	int GetX()
	{
		//if (uprawnienia)

		return x;
	}

	double DistanceFromCenter()
	{
		double distance;
		distance = sqrt(x * x + y * y + z * z);
		return distance;
	}
};


class Rectangle
{
private:
	float lenght;
	float height;
public:
	Rectangle(float l = 1, float h = 1)
	{
		lenght = l;
		height = h;
	}



	float GetArea() {
		return lenght * height;
	}

	float GetPerimeter() {
		return lenght * 2 + height * 2;
	}

	void GetInfo() {

		cout << "Area: " << GetArea() << endl;
		cout << "Perimeter: " << GetPerimeter() << endl;
		cout << "Height: " << height << endl;
		cout << "Lenght: " << lenght << endl;
	}
};

/*
ZADANIE
Zdefiniuj klase opisuj�ce konto bankowe. Mo�liwo�ci klasy:
* konstruktory
* metoda kt�ra dokona wp�aty na konto
* metoda kt�ra wyp�aty z konta
* metoda kt�ra wykona przelew na inne konto
* metod� kt�ra poka�e informacje o koncie.

Napisz program kt�ry zaprezentuje mo�liwo�ci obiektu na podstawie tej klasy.
*/

class KontoBankowe
{
private:
	string numerKonta;
	string wlasciciel;
	double stanKonta;
public:
	//konstuktor
	KontoBankowe(string numerKonta, string wlasciciel, double stanNaPoczatku = 0.00)
	{
		this->wlasciciel = wlasciciel;
		stanKonta = stanNaPoczatku;

	}
	void Deposit(double sum)
	{
		stanKonta += sum;
	}

	void Wycofano(double sum) {
		if (stanKonta >= sum) {
			stanKonta -= sum;
			cout << "Wycofany: " << sum << " PLN." << endl;
		}
		else {
			cout << "Na Twoim koncie nie ma wystarczaj�cych �rodk�w." << endl;
		}
	}

	void Transfer(double sum, KontoBankowe &kontoDocelowe)
	{
		if (stanKonta >= sum)
		{
			stanKonta -= sum;
			
			kontoDocelowe.Deposit(sum);
		}
		else
		{
			cout << "Niewystarczaj�ce �rodki na koncie" << endl;
		}

	}

	void ShowInfo()
	{
		cout << "Numer konta: " << numerKonta << endl;
		cout << "w�a�ciciel konta: " << wlasciciel << endl;
		cout << "stan konta: " << stanKonta << endl;
	}
};

void ShowBankInfo()
{
	KontoBankowe account("1234567890", "Jan Kowalski", 1000.0);

	account.ShowInfo();

	account.Deposit(500.0);
	account.ShowInfo();

	account.Deposit(200.0);
	account.ShowInfo();

	account.Transfer(300.0, "0987654321");
	account.ShowInfo();
}

void RectExercises()
{
	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.GetArea() << endl;
	cout << "Perimeter: " << firstRectangle.GetPerimeter() << endl;
	firstRectangle.GetInfo();
}

void StartRectangle() {
	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.GetArea() << endl;

	cout << "Perimeter: " << firstRectangle.GetPerimeter() << endl;
	firstRectangle.GetInfo();
}



int main()
{
	setlocale(LC_CTYPE, "Polish");
	//Point firstPoint;
	////firstPoint.x = 3;
	//firstPoint.SetX(-3);
	////firstPoint.y = 5;
	////firstPoint.z = 8;
	//cout << "Distance " << firstPoint.DistanceFromCenter() << "\n";

	//Point secondPiont(15);
	//cout << "Distance " << secondPiont.DistanceFromCenter() << "\n";

	ShowBankInfo();
}