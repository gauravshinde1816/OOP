// CPP program to illustrate
// Private Destructor
#include <iostream>
using namespace std;
// A class with private destructor
class Test
{
public:
    Test()
    {
        cout << "Constructor called" << endl;
    }

private:
    ~Test()
    {
        cout << "Destructor called" << endl;
    }

public:
    friend void destructTest(Test *);
};

// Only this function can destruct objects of Test
void destructTest(Test *ptr)
{
    delete ptr;
}

int main()
{
    // create an object
    Test *ptr = new Test;

    // destruct the object
    destructTest(ptr);

    return 0;
}
