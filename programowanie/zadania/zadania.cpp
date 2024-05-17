#include <iostream>
using namespace std;

    class Count {
    private:
        double number;
    public:

        void add(double addingNumber)
        {
            number += number + addingNumber;
        };

        void substract(double substractNumber)
        {
            number -= number - substractNumber;
        }

       Count()
        {
            number = 0;
        }

        Count(double oneParameter) :number(oneParameter) {}

        double getNumber() const
        {
            return number;
        }
    };

    class Sumator
    {
    private:
        int numbers[10];
    public:
        Sumator()
        {
            for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
            {
                numbers[i] = 0.0;
            }
           
        }

        Sumator(int maxValue)
        {
            for (int i = 0; i < sizeof(numbers)/sizeof(numbers[0]); i++)
            {
                numbers[i] = (rand() % (maxValue + 1));
            }
        }

        double Sum()
        {
            double Sum = 0;
            for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
            {
                Sum = Sum + numbers[i];
            }
            return Sum;
        }

        double SumDivide3()
        {
            double sum = 0;
            for (int i = 0; i < 10; i++)
            {
                if (numbers[i] % 3 == 0)
                {
                    sum = sum + numbers[i];
                }
                return sum;
            }
        }

        void showInfo()
        {
            for (int i = 0; i < 10; i++)
            {
                cout << i << "." << numbers[i] << endl;
            }
        }

        void showElementsInRange(int lowIndex, int highIndex) 
        {
            if (lowIndex < 0) {
                lowIndex = 0;
            }

            if (highIndex >= sizeof(numbers) / sizeof(numbers[0]))
            {
                highIndex = sizeof(numbers) / sizeof(numbers[0]) - 1;
            }

            for (int i = lowIndex; i <= highIndex; i++) 
            {
                cout << "numbers[" << i << "] = " << numbers[i] <<endl;
            }
        }
    };

int main()
{
    //ex1
    Count counter;
    counter.add(5.0);

    cout << "current number:" << counter.getNumber() << "." << endl;
    return 0;
    //ex2
    Sumator cat;
    Sumator dog(100);

    cout << "Elements of sumator without parameters: " << endl;
    cat.showInfo();

    cout << "Elements of sumator with paramerters: " << endl;
    dog.showInfo;

    cout << "Elements of sumator n range 2-8" << endl;
    dog.showElementsInRange(2, 8);

    cout << "sum of elements of second sumator(with parameters)" << dog.Sum() << endl;
    cout << "sum of elements of second sumator (with parameters) that can devide by 3. ", dog.SumDivide3 << endl;

}

