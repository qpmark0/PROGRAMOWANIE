/*
Podstawy programowania:

1.program obliczający średnią arytmetyczną dwóch liczb

3. Program obliczający objętość stożka.
4. Program obliczający pole koła.
5. Program obliczający wartość wyrażenia a^2 + b^2
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
    //cout << "the area of ​​the rectangle is : " << area << endl;


}

int main()
{
    //task2();
}   //task3()


void task3()
{

}

