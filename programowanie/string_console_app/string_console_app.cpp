
#include <iostream>
using namespace std;

/*
* Napisz program, który bêdzie prosi³ o has³o. Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
* Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
* Poproœ u¿ytkownika o wprowadzenie liczby ca³kowitej w systemie dziesiêtnym. Nastêpnie skonwertuj tê liczbê na system dwójkowy (binarny) i wyœwietl wynik.
* Program sprawdzaj¹cy czy podany ci¹g znaków jest palindromem (czyli takim, który czytany od ty³u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj¹cy czy podane dwa s³owa s¹ anagramami (czyli takimi, które zawieraj¹ te same litery, ale w innym uk³adzie, np. "klasa" i "salka")
*

* Program wyci¹gaj¹cy informacje z numeru PESEL
* Program implementuj¹cy algorytm szyfrowania Cezara (proste szyfrowanie, w którym ka¿dy znak w tekœcie jest zastêpowany innym znakiem, przesuniêtym o sta³¹ liczbê pozycji w alfabecie).


* Program który na wejœciu przyjmie równanie a na wyjœciu da równanie w odwrotnej notacji polskiej ONP. Np. na wejœciu 2+3*4 na wyjœcu da 234*+
* Program, który na wejœciu przyjmie rówanie w ONP a na wyjœciu wyœwietli wynik rówania.
*/

//*Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.

void task1()
{
    char signFromUser;
    //signFromUser = 'a';
    std::cout << "Podaj znak\n";
    std::cin >> signFromUser;

    std::cout << "Poda³eœ znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        std::cout << "Znak jest ma³¹ liter¹ alfabetu\n";
    else
        std::cout << "Znak nie jest ma³¹ liter¹ alfabetu\n";

    signFromUser = signFromUser + 2;
    std::cout << "Poda³eœ znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    std::cout << "Poda³eœ znak " << signFromUser << "\n";
}


//Napisz program, który poprosi cie o twoje imiê i ciê przywita.
void task2()
{
    std::string userName;
    //userName = "Ala";
    std::cout << "Podaj swoje imiê:\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, który policzy ile w napisie jest liter 'a'.
void task3()
{
    std::string textFromUser;
    std::cout << "Podaj tekst\n";
    std::cin >> textFromUser;

    //textFromUser = "";
    //textFromUser[0] = 'h';
    //std::cout << textFromUser[1] << "\n";
    //std::cout << textFromUser.length() << "\n"; 
    //if (textFromUser == "Ala")

    int counter = 0;
    for (int i = 0; i < textFromUser.length(); i++)
    {
        if (textFromUser[i] == 'a')
            counter++;
    }

    std::cout << "Ma³ych liter 'a' jest " << counter << "\n";
}

//*Napisz program, który bêdzie prosi³ o has³o.Nie przepuœci dalej dopóki nie zostanie ono podane prawid³owo.
void task4()
{
    string password = "abcdefg";
    string passwordFromUser;

    while (true)
    {
        cout << "Enter password" << endl;
        cin >> passwordFromUser;
        if (passwordFromUser == password)
        {
            cout << "Password is correct" << endl;
        }
        else
        {
            cout << "Password isn't correct" << endl;
        }
         
    }

        
}

//*Napisz program, który pobiera od u¿ytkownika ci¹g znaków i wyœwietla liczbê samog³osek i spó³g³osek w tym ci¹gu.
void task5()
{
    
}


int main()
{
    //task4();
    task5();
}





