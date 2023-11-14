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
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << "Suma liczb od 1 do 100 wynosi: " << sum << endl;
}

//8Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task8()
{
	for (int i = 1; i <= 10; i++)
	{
		int power = pow(i, 2);
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

//10Program wy�wietlaj�cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
void task10()
{

	for (int i = 1; i <= 10; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial *= j;
		}
		cout << "Silnia to: " << factorial << endl;
	}
}

//11Program wy�wietlaj�cy na ekranie tabliczk� mno�enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
void task11()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << "*" << j << "=" << i*j << "  ";
		}
		cout << endl;
	}
}

//12Program wy�wietlaj�cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
void task12()
{
	for (int i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			cout << i << endl;
		}
	}
}

//13 Program obliczaj�cy sum� kwadrat�w liczb od 1 do 10
void task13()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + i * i;
	}
	cout << sum;
}

//14 Program wy�wietlaj�cy na ekranie ci�g Fibonacciego do 20 elementu
// (ci�g Fibonacciego to ci�g gdzie ka�dy element jest sum� dw�ch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task14()
{
	for (int i = 0; i < length; i++)
	{

	}
}

//15 Program, k�ry wy�wietli poni�sze cztery zwory :
// 54321        121212        122333
// 65432        212121        223334444
// 76543        121212        333444455555
// 87654        212121        444455555666666
void task15()
{

}

//16 Oblicz sum� szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Je�eli si� nie pomylisz, to dla odpowiednio du�ej warto�ci n 
// po przemno�eniu jej przez 6 i spierwiastkowaniu powiniene� otrzyma� warto�� liczby ?(suma szeregu jest r�wna ?2 / 6).Zwr�� uwag�, �e pierwsza 
// warto�� indeksu to 1, a nie 0. Dok�adno�� oblicze� mo�na sprawdzi� por�wnuj�c z warto�ci� odczytan� z w�asno�ci Math.PI.
void task16()
{
	double sum = 0;
	double numberFromUser = 0;
	cout << "Enter number: " << endl;
	cin >> numberFromUser;
	for (int i = 1; i < numberFromUser; i++)
	{
		sum = sum + (1.0 / pow(i, 2));
	}
	cout << "Sum: " << sqrt(sum * 6) << endl;
}

//3 Miasto T.ma obecnie 100 tys.mieszka�c�w, ale jego populacja ro�nie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszka�c�w
//  i ta liczba ro�nie w tempie 2 % na rok.Wykonaj symulacj� prezentuj�c� liczb� mieszka�c�w w obu miastach i zatrzymuj�c� si�, gdy liczba mieszka�c�w miasta 
// T.przekroczy liczb� z miasta B.
void task3() 
{
	int firstCity = 100000;
	int secondCity = 300000;

	for (int i = 0; firstCity < secondCity; i++)
	{
		firstCity = firstCity * 1.03;
		secondCity = secondCity * 1.02;
		cout << firstCity << "  " << secondCity << endl;
	}
	cout << firstCity << "  " << secondCity << endl;
}

//4Napisz program, kt�ry poprosi u�ytkownika o wprowadzenie dowolnej liczby ca�kowitej.Nast�pnie program powinien obliczy� i wy�wietli� liczb� cyfr.
void task4()
{
	int numberFromUser = 0;
	cout << "Enter number from user: " << endl;
	cin >> numberFromUser;
	cout << to_string(numberFromUser).length();
}

//5Program sprawdzaj�cy czy podana liczba jest liczb� doskona��(czyli tak�, kt�rej suma dzielnik�w(z wy��czeniem samej siebie) 
// jest r�wna danej liczbie, np. 6 jest liczb� doskona��, poniewa� 1 + 2 + 3 = 6).
void task5()
{

}

//1 Napisz program, kt�ry policzy sum� cyfr podanej przez u�ytkownika liczby.
void task1()
{

}

//2 Program wy�wietlaj�cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dop�ki suma tych kwadrat�w nie przekroczy 1000.
void task2()
{

}

int main()
{
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	//task13();
	//task14();
	//task15();
	// task16();
	//task3();
	//task4();
	//task5();
	//task1();
	task2();
	
}

