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

void task2()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];
    srand(time(NULL));
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
        cout << numbers[i] << "," << endl;
        
}
int main()
{
    task2();
}

   
