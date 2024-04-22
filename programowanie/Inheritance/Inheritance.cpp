#include <iostream>
using namespace std;

class C
{
protected:
    int fieldA;

public:
    C()
    {
        fieldA = 15;
        name = "C";
    }
   
};

class A: public C
{
private :
    

public:
    A()
    {
        fieldA = 5;
    }
    
   /* void ShowInfo()
    {
        cout << "Info about class A" << endl;
        cout << "Field A" << endl;
    }
   */
};

class B: public C
{
    int fieldA;
    int fieldB;

public:
    B()
    {
        fieldA = 5;
        fieldB = 4;
    }

    int GetFieldA()
    {
        return fieldA;
    }

    int GetFieldB()
    {
        return fieldB;
    }

   /* void ShowInfo()
    {
        cout << "Info about class B" << endl;
        cout << "Field A= " << fieldA << endl;
        cout << "Field B= " << fieldB << endl;
    }
    */
};

int main()
{
    std::cout << "Hello World!\n";
}


