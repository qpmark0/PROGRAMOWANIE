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
    int max = numbers[0];
    for (int i = 1; i < SIZE_OF_ARRAY; i++)
    {
        if (numbers[i] > max)
            max = numbers[i]
    }
}

void task3() {
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];
    srand(time(NULL));
    int numbers[SIZE OF ARRAY];
    srand(time(NULL));
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        cout << numbers[i] << "," << endl;
    }
    int sum = 0;
    for (int i = 0; i < SIZE_OF_ARRAY; i++)
    {
        sum = sum + numbers[1];
    }
    double average = sum * 1.0 / SIZE_OF_ARRAY;
    cout << "AVERAGE:" << average << endl;
}

void task4()
{
    const int UPPER_RANGE = 10;
    const int LOWER_RANGE = 5;
    const int SIZE_OF_ARRAY = 5;
    int numbers[SIZE_OF_ARRAY];
    srand(time(NULL));
    for (int i = 0; i <SIZE_OF_ARRAY; i++)
    {
        numbers[i] = rand() % (UPPER_RANGE - LOWER_RANGE + 1) + LOWER_RANGE;
    }
    for (numberFromRange=LOWER_RANGE;numberFromRange<=UPPER_RANGE;numberFromRange++)
    {
        int numberOfOccurrences = 0;
        for (int j = 0; j < SIZE_OF_ARRAY; j++)
        {
            if (numbers[j] == numberFromRange)
                numberOfOccurences++;
        }
        cout << "liczba" << numberFromRange << "Wystapila" << numberOfOccurences << "razy" << endl;
    }
}
int main()
{
    task2();
}

   
