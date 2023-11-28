
#include <iostream>
using namespace std;

/*
* Napisz program, kt�ry b�dzie prosi� o has�o. Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
* Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
* Popro� u�ytkownika o wprowadzenie liczby ca�kowitej w systemie dziesi�tnym. Nast�pnie skonwertuj t� liczb� na system dw�jkowy (binarny) i wy�wietl wynik.
* Program sprawdzaj�cy czy podany ci�g znak�w jest palindromem (czyli takim, kt�ry czytany od ty�u jest taki sam, jak czytany od przodu, np. "kajak")
* Program sprawdzaj�cy czy podane dwa s�owa s� anagramami (czyli takimi, kt�re zawieraj� te same litery, ale w innym uk�adzie, np. "klasa" i "salka")
*

* Program wyci�gaj�cy informacje z numeru PESEL
* Program implementuj�cy algorytm szyfrowania Cezara (proste szyfrowanie, w kt�rym ka�dy znak w tek�cie jest zast�powany innym znakiem, przesuni�tym o sta�� liczb� pozycji w alfabecie).


* Program kt�ry na wej�ciu przyjmie r�wnanie a na wyj�ciu da r�wnanie w odwrotnej notacji polskiej ONP. Np. na wej�ciu 2+3*4 na wyj�cu da 234*+
* Program, kt�ry na wej�ciu przyjmie r�wanie w ONP a na wyj�ciu wy�wietli wynik r�wania.
*/

//*Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.

void task1()
{
    char signFromUser;
    //signFromUser = 'a';
    std::cout << "Podaj znak\n";
    std::cin >> signFromUser;

    std::cout << "Poda�e� znak " << signFromUser << "\n";

    //if (signFromUser >= 97 && signFromUser <= 122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        std::cout << "Znak jest ma�� liter� alfabetu\n";
    else
        std::cout << "Znak nie jest ma�� liter� alfabetu\n";

    signFromUser = signFromUser + 2;
    std::cout << "Poda�e� znak " << signFromUser << "\n";

    signFromUser = 'a' + 2;
    std::cout << "Poda�e� znak " << signFromUser << "\n";
}


//Napisz program, kt�ry poprosi cie o twoje imi� i ci� przywita.
void task2()
{
    std::string userName;
    //userName = "Ala";
    std::cout << "Podaj swoje imi�:\n";
    std::cin >> userName;

    std::cout << "Witaj " << userName << " tutaj.\n";
}

//Napisz program, kt�ry policzy ile w napisie jest liter 'a'.
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

    std::cout << "Ma�ych liter 'a' jest " << counter << "\n";
}

//*Napisz program, kt�ry b�dzie prosi� o has�o.Nie przepu�ci dalej dop�ki nie zostanie ono podane prawid�owo.
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

//*Napisz program, kt�ry pobiera od u�ytkownika ci�g znak�w i wy�wietla liczb� samog�osek i sp�g�osek w tym ci�gu.
void task5()
{
    
}


int main()
{
    //task4();
    task5();
}





