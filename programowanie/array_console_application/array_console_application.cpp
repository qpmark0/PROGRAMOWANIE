#include <iostream>
using namespace std;

void task1()
{
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << "Podaj liczbe" << endl;
        cin >> numbers[i];
    }
    for ( int i = SIZE_OF_ARRAY - 1; i >= 0; i--)
    {
        cout << "Podana liczba " << numbers[i] << endl;
    }
}
int main()
{
    task1();
}

   