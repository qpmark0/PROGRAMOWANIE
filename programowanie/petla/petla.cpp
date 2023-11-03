// petla_for.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;

// DO - WHILE
//1 Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
//2 Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.

//WHILE
//3 Miasto T.ma obecnie 100 tys.mieszka�c�w, ale jego populacja ro�nie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszka�c�w i ta liczba ro�nie w tempie 2 % na rok.Wykonaj symulacj� prezentuj�c� liczb� mieszka�c�w w obu miastach i zatrzymuj�c� si�, gdy liczba mieszka�c�w miasta T.przekroczy liczb� z miasta B.
//4Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
//5Program sprawdzaj�cy czy podana liczba jest liczb� doskona��(czyli tak�, kt�rej suma dzielnik�w(z wy��czeniem samej siebie) jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).

// FOR
//6 Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
//7 Program obliczaj�cy sum� liczb od 1 do 100
//8Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
//9Program obliczaj�cy n!.
//10Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
//11Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
//12Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
//13 Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
//14 Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu(ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
//15 Program, k�ry wy�wietli poni�sze cztery zwory :
// 54321        121212        122333
// 65432        212121        223334444
// 76543        121212        333444455555
// 87654        212121        444455555666666

//16 Oblicz sum� szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Je�eli si� nie pomylisz, to dla odpowiednio du�ej warto�ci n po przemno�eniu jej przez 6 i spierwiastkowaniu powiniene� otrzyma� warto�� liczby ?(suma szeregu jest r�wna ?2 / 6).Zwr�� uwag�, �e pierwsza warto�� indeksu to 1, a nie 0. Dok�adno�� oblicze� mo�na sprawdzi� por�wnuj�c z warto�ci� odczytan� z w�asno�ci Math.PI.

//6 Program wy�wietlaj�cy na ekranie kolejne liczby naturalne od 1 do 10
void task6()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
}

//7 Program obliczaj�cy sum� liczb od 1 do 100
void task7()
{
	int sum = 0;
	for (int i = 1; i <=100 ; i++)
	{
		sum = sum + i;
	}
	cout << "Suma liczb od 1 do 100 wynosi: " << sum << endl;
}

//8Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task8()
{
	for (int i = 1; i <=10; i++)
	{
		int power = pow(i,2);
		cout << "Kwadrat liczby wunosi:" << power << endl;
	}
}

//9Program obliczaj�cy n!.
void task9()
{
	int number;
	cout << "Enter the number: " << endl;
	cin >> number;
	if (number < 0)
	{
		cout << "factorial is only defined for non-negative numbers" << endl;
	}
	else
	{
		int result = 1;
		for (int i = 1; i <= number; i++)
		{
			result *= i;
		}
		cout << "factorial of number is:" << result << endl;
	}
}

int main()
{
	//task6();
	//task7();
	//task8();
	//task9();
}

