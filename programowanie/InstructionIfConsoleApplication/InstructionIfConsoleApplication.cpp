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
	cout << "The area of ​​the rectangle is: " << area << endl;


}


//3. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
//4. Program sprawdzający czy podany rok jest rokiem przestępnym
//5. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
//6. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
//7. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
//8. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury(np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
//9. Program sprawdzjący czy podana liczba jest z przediału < 1; 15)
//10. Program sprawdzający czy osoba jest pełnoletnia.
//11. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.

//12. Napisz program, który będzie działać jako prosty kalkulator matematyczny, umożliwiając użytkownikowi wybór operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
//13. Napisz program, który wczyta numer miesiąca i wyświetli jego słowny odpowiednik.
//14. Napisz program, który na podstawie współczynników równania kwadratowego(a, b, c) sprawdzi, czy to równanie ma rozwiązania rzeczywiste, i jeśli tak, to je obliczy.


//3. Program sprawdzający czy podana liczba jest dodatnia, ujemna czy równa zero
void task3()
{
	int number;
	cout << "wpisz liczbe" << endl;
	cin >> number;
	if (number > 0)
	{
		cout << "liczba jest dodatnia" << endl;
	}
	else
	{
		cout << "liczba jest ujemna" << endl;
	}

}
//4. Program sprawdzający czy podany rok jest rokiem przestępnym
void task4()
{
	int rok;
	cout << "wpisz rok:";
	cin >> rok;
	if (rok % 4 && rok % 100 && rok % 400)
	{
		cout << "rok jest rokiem przestępnym." << endl;
	}
	else
	{
		cout << "rok nie jest rokiem przestępnym";
	}
}

//5. Program wyświetlający odpowiedni komunikat w zależności od podanej oceny(np. "bardzo dobry" dla oceny 5, "dobry" dla oceny 4 itd.)
void task5()
{
	int ocena;

	cout << "wpisz ocene:";
	cin >> ocena;
	if (ocena == 5)
	{
		cout << "bardzo dobry" << endl;
	}
	else if (ocena == 4)
	{
		cout << "dobry" << endl;
	}
	else if (ocena == 3)
	{
		cout << "dostateczny" << endl;
	}
	else if (ocena == 2)
	{
		cout << "dopuszczający" << endl;
	}
	else if (ocena == 1)
	{
		cout << "niedostateczny" << endl;
	}
}

//6. Program sprawdzający czy podane hasło jest poprawne(np.jeśli hasło jest "abc123", program powinien wyświetlić "hasło poprawne", jeśli jest inne, powinien wyświetlić "hasło niepoprawne").
void task6()
{
	string haslo;
	cout << "Podaj haslo" << endl;
	cin >> haslo;
	if (haslo == "abc123")
	{
		cout << "haslo jest poprawne" << endl;
	}
	else
	{
		cout << "haslo jest niepoprawne" << endl;
	}
}

//7. Program sprawdzający czy podana data jest poprawna(np.sprawdzając, czy dzień jest z zakresu od 1 do 31, miesiąc od 1 do 12 itd.)
void task7()
{
	int dzien, miesiac, rok;
	cout << "wpisz dzien" << endl;
	cin >> dzien;
	cout << "wpisz miesiac" << endl;
	cin >> miesiac;
	cout << "wpisz rok" << endl;
	cin >> rok;

	if (dzien <= 1 && dzien <= 31 && miesiac <= 12)
	{
		cout << "data jest poprawna" << endl;
	}
	else if (miesiac = 2 && dzien <= 28)
	{
		cout << "data jest poprawna" << endl;
	}
	else
	{
		cout << "data nie jest poprawna" << endl;
	}

}

//8. Program wyświetlający odpowiedni komunikat w zależności od podanej temperatury(np. "ciepło" dla temperatury powyżej 20 stopni Celsjusza, "chłodno" dla temperatury poniżej 10 stopni Celsjusza itd.)
void task8()
{
	double temperatura;
	cout << "wpisz temperature:" << endl;
	cin >> temperatura;
	if (temperatura > 30)
	{
		cout << "goraco" << endl;
	}
	else if (temperatura > 20)
	{
		cout << "cieplo" << endl;
	}
	else if (temperatura < 10)
	{
		cout << "chlodno" << endl;
	}
	else if (temperatura < 15)
	{
		cout << "średnio" << endl;
	}

}

//9. Program sprawdzjący czy podana liczba jest z przediału < 1; 15)
void task9()
{
	double liczba;
	cout << "wpisz liczbe:" << endl;
	cin >> liczba;
	if (liczba >= 1 && liczba <= 15)
	{
		cout << "liczba jest w przedziale " << endl;
	}
	else
	{
		cout << "liczba nie jest w przedziale " << endl;
	}

}

//10. Program sprawdzający czy osoba jest pełnoletnia.
void task10()
{
	double wiek;
	cout << "wpisz wiek:" << endl;
	cin >> wiek;
	if (wiek < 18)
	{
		cout << "osoba nie jest pelnoletnia" << endl;
	}
	else if (wiek > 18)
	{
		cout << "osoba jest pelnoletnia" << endl;
	}
}

//11. Program, który sprawdzi czy z podanych długości boków można zrobić trójkąt.
void task11()
{
	double firstSide, secondSide, thirdSide;
	cout << "wpisz pierwsza dlugosc:" << endl;
	cin >> firstSide;
	cout << "wpisz druga dlugosc:" << endl;
	cin >> secondSide;
	cout << "wpisz trzecia dlugosc:" << endl;
	cin >> thirdSide;
	if ((firstSide + secondSide > thirdSide) && (firstSide + thirdSide > secondSide) && (secondSide + thirdSide > firstSide))
	{
		cout << "Z podanych długosci mozna zrobic trojkat." << endl;
	}
	else
	{
		cout << "Z podanych dlugosci nie mozna zrobic trojkata." << endl;
	}

}

//12. Napisz program, który będzie działać jako prosty kalkulator matematyczny,
//  umożliwiając użytkownikowi wybór operacji(dodawanie, odejmowanie, mnożenie, dzielenie) i wprowadzanie liczb do obliczeń.
void task12()
{
	

}

void task13()
{
	double number;
	cout << "enter the number:" << endl;
	cin >> number;
	do
	{
		while (number != 0);
	}
	
}

int main()
{
	//task3();
	//task4();
	//task5();
	//task6();
	//task7();
	//task8();
	//task9();
	//task10();
	//task11();
	//task12();
	task13();
}