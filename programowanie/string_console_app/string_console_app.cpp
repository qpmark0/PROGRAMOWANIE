
#include <iostream>
using namespace std;

void task1()
{
    char signFromUser;
    //signFromUser = 'a';
    cout << "Podaj znak" << endl;
    cin >> signFromUser;
    cout << "POda�e� znak " << signFromUser;
    //if (signFromUser >= 97 && signFromUser <=122)
    if (signFromUser >= 'a' && signFromUser <= 'z')
        cout << "Znak jest ma�� liter� alfabetu" << endl;
    else
        cout << "Znak nie jest ma�� liter� alfabetu" << endl;


}

int main()
{
    task1();
}





