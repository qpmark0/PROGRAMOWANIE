/*
Podstawy programowania:

1.program obliczający średnią arytmetyczną dwóch liczb

.

6. Program obliczający pole trójkąta o podstawie b i wysokości h
7. Program obliczający objętość kuli o promieniu r
8. Program obliczający pole trapezu o podstawach a i b oraz wysokości h
9. Program obliczający średnią ważoną trzech liczb z podanymi odpowiednimi wagami w1, w2 i w3.
*/

#include <iostream>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

void task1()
{
    double firstNumber, secondNumber;
    cout << "Podaj pierwszą liczbę:\n";
    cin >> firstNumber;
    cout << "Podaj drugą liczbę:\n";
    cin >> secondNumber;

    double avarageOfNumbers = (firstNumber + secondNumber) / 2;

    cout << "Średnia tych liczb to: " << avarageOfNumbers << "\n";
}

//2. Program obliczający pole prostokąta.
void task2()
{
    double sideA;
    double sideB;

    cout << "Wpisz długośc boku a:";
    cin >> sideA;
    cout << "Wpisz długość boku b:";
    cin >> sideB;
    double area;
    area = sideA * sideB;
    cout << "the area of ​​the rectangle is : " << area << endl;
}

//3. Program obliczający objętość stożka
void task3()
{
    double height, radius, volume;
    cout << "Wpisz długość wysokości: ";
    cin >> height;
    cout << "Wpisz długośc promieniu: ";
    cin >> radius;
    volume = 1 / 3.0 * M_PI * pow(radius, 2);
    cout << "cone volume: " << volume << endl;
}

//4. Program obliczający pole koła.
void task4()
{
    double radius, area;
    cout << "wpisz długość promienia: ";
    cin >> radius;
    area = M_PI * pow(radius, 2);
    cout << "pole koła:" << area << endl;
}

//5. Program obliczający wartość wyrażenia a ^ 2 + b ^ 2
void task5()
{

    }


int main()
{
    setlocale(LC_CTYPE, "polish");
    {
        //task2();
        //task3();
        //task4();
        task5();
    }
}