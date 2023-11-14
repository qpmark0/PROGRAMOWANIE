// petla_for.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define _USE_MATH_DEFINES
using namespace std;

// DO - WHILE
//1 Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
//2 Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.

//WHILE
//3 Miasto T.ma obecnie 100 tys.mieszkañców, ale jego populacja roœnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkañców i ta liczba roœnie w tempie 2 % na rok.Wykonaj symulacjê prezentuj¹c¹ liczbê mieszkañców w obu miastach i zatrzymuj¹c¹ siê, gdy liczba mieszkañców miasta T.przekroczy liczbê z miasta B.
//4Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
//5Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹(czyli tak¹, której suma dzielników(z wy³¹czeniem samej siebie) jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).

// FOR
//6 Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
//7 Program obliczaj¹cy sumê liczb od 1 do 100
//8Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
//9Program obliczaj¹cy n!.
//10Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
//11Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
//12Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
//13 Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
//14 Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu(ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
//15 Program, kóry wyœwietli poni¿sze cztery zwory :
// 54321        121212        122333
// 65432        212121        223334444
// 76543        121212        333444455555
// 87654        212121        444455555666666

//16 Oblicz sumê szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Je¿eli siê nie pomylisz, to dla odpowiednio du¿ej wartoœci n po przemno¿eniu jej przez 6 i spierwiastkowaniu powinieneœ otrzymaæ wartoœæ liczby ?(suma szeregu jest równa ?2 / 6).Zwróæ uwagê, ¿e pierwsza wartoœæ indeksu to 1, a nie 0. Dok³adnoœæ obliczeñ mo¿na sprawdziæ porównuj¹c z wartoœci¹ odczytan¹ z w³asnoœci Math.PI.

//6 Program wyœwietlaj¹cy na ekranie kolejne liczby naturalne od 1 do 10
void task6()
{
	for (int i = 1; i <= 10; i++)
	{
		cout << i << endl;
	}
}

//7 Program obliczaj¹cy sumê liczb od 1 do 100
void task7()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + i;
	}
	cout << "Suma liczb od 1 do 100 wynosi: " << sum << endl;
}

//8Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.)
void task8()
{
	for (int i = 1; i <= 10; i++)
	{
		int power = pow(i, 2);
		cout << "Kwadrat liczby wunosi:" << power << endl;
	}
}

//9Program obliczaj¹cy n!.
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

//10Program wyœwietlaj¹cy na ekranie silnie z liczb od 1 do 10 (np. 1!, 2!, 3!, 4!itd.)
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

//11Program wyœwietlaj¹cy na ekranie tabliczkê mno¿enia od 1 do 9 (np. 1x1 = 1, 1x2 = 2, 1x3 = 3 itd.).
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

//12Program wyœwietlaj¹cy na ekranie wszystkie liczby podzielne przez 3 z zakresu od 1 do 100
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

//13 Program obliczaj¹cy sumê kwadratów liczb od 1 do 10
void task13()
{
	int sum = 0;
	for (int i = 0; i <= 10; i++)
	{
		sum = sum + i * i;
	}
	cout << sum;
}

//14 Program wyœwietlaj¹cy na ekranie ci¹g Fibonacciego do 20 elementu
// (ci¹g Fibonacciego to ci¹g gdzie ka¿dy element jest sum¹ dwóch poprzednich, np. 0, 1, 1, 2, 3, 5, 8, 13 itd.)
void task14()
{
	for (int i = 0; i < length; i++)
	{

	}
}

//15 Program, kóry wyœwietli poni¿sze cztery zwory :
// 54321        121212        122333
// 65432        212121        223334444
// 76543        121212        333444455555
// 87654        212121        444455555666666
void task15()
{

}

//16 Oblicz sumê szeregu 1 / 1 ^ 2 + 1 / 2 ^ 2 + 1 / 3 ^ 2 + ... + 1 / n ^ 2. Je¿eli siê nie pomylisz, to dla odpowiednio du¿ej wartoœci n 
// po przemno¿eniu jej przez 6 i spierwiastkowaniu powinieneœ otrzymaæ wartoœæ liczby ?(suma szeregu jest równa ?2 / 6).Zwróæ uwagê, ¿e pierwsza 
// wartoœæ indeksu to 1, a nie 0. Dok³adnoœæ obliczeñ mo¿na sprawdziæ porównuj¹c z wartoœci¹ odczytan¹ z w³asnoœci Math.PI.
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

//3 Miasto T.ma obecnie 100 tys.mieszkañców, ale jego populacja roœnie co roku o 3 % rocznie.Miasto B.ma 300 tys.mieszkañców
//  i ta liczba roœnie w tempie 2 % na rok.Wykonaj symulacjê prezentuj¹c¹ liczbê mieszkañców w obu miastach i zatrzymuj¹c¹ siê, gdy liczba mieszkañców miasta 
// T.przekroczy liczbê z miasta B.
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

//4Napisz program, który poprosi u¿ytkownika o wprowadzenie dowolnej liczby ca³kowitej.Nastêpnie program powinien obliczyæ i wyœwietliæ liczbê cyfr.
void task4()
{
	int numberFromUser = 0;
	cout << "Enter number from user: " << endl;
	cin >> numberFromUser;
	cout << to_string(numberFromUser).length();
}

//5Program sprawdzaj¹cy czy podana liczba jest liczb¹ doskona³¹(czyli tak¹, której suma dzielników(z wy³¹czeniem samej siebie) 
// jest równa danej liczbie, np. 6 jest liczb¹ doskona³¹, poniewa¿ 1 + 2 + 3 = 6).
void task5()
{

}

//1 Napisz program, który policzy sumê cyfr podanej przez u¿ytkownika liczby.
void task1()
{

}

//2 Program wyœwietlaj¹cy na ekranie kwadraty liczb od 1 do 10 (np. 1, 4, 9, 16 itd.) dopóki suma tych kwadratów nie przekroczy 1000.
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

