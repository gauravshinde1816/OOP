# Introduction to Constructors in CPP

## What are Constructors ?

    => Constructors are the special types of functions used to intialize the object.
    => It is automatically called when object is intialized.

## Types of Constructors:

[*] Default Constructors
[*] Parametarized Constructors
[*] Copy Constructors

## Let us consider one example:

        Let us understand the types of constructors in C++ by
        taking a real-world example. Suppose you went to a shop to buy a marker.
        When you want to buy a marker, what are the options?
        The first one you go to a shop and say give me a marker.
        So just saying give me a marker mean that you did not set which brand name and which color,
        you didn’t mention anything just say you want a marker. So when we said just
        I want a marker so whatever the frequently sold marker is there in the market
        or in his shop he will simply hand over that. And this is what a default constructor is! The second method you go to a shop and
        say I want a marker a red in color and XYZ brand.
        So you are mentioning this and he will give you that marker.
        So in this case you have given the parameters. And this is what a parameterized constructor is!
        Then the third one you go to a shop and say I want a marker like this(a physical marker on your hand).
        So the shopkeeper will see that marker. Okay, and he will give a new marker for you. So copy of that marker.
        And that’s what copy constructor is!

## Copy Constructors:

    What is a copy constructor?
    A copy constructor is a member function that initializes an object using another object of the same class.
    A copy constructor has the following general function prototype:

`ClassName (const ClassName &old_obj)`;

## Deep And Shallow copy:

### Deep Copy:

[*] Deep repetition truly clones the underlying data. It is not shared between the first and therefore the copy.
[*] Deep copy stores copies of the object’s value.
[*] Deep copy doesn’t reflect changes made to the new/copied object in the original object.
[*] Deep copy is comparatively slower.

### Shallow Copy:

[*] Shallow Copy stores the references of objects to the original memory address.
[*] Shallow Copy reflects changes made to the new/copied object in the original object.

[*] Shallow copy is faster than Deep copy

## Copy constructor vs assignment operator in C++:

#include<iostream>
#include<stdio.h>

using namespace std;

class Test
{
public:
Test() {}
Test(const Test &t)
{
cout<<"Copy constructor called "<<endl;
}

      Test& operator = (const Test &t)
      {
         cout<<"Assignment operator called "<<endl;
         return *this;
      }

};

// Driver code
int main()
{
Test t1, t2;

#### t2 = t1; // calls assignment operator, same as "t2.operator=(t1);"

#### Test t3 = t1; // calls copy constructor, same as "Test t3(t1);"

getchar();
return 0;
}

output:
Assignment operator called
Copy constructor called

[*] Copy constructor is called when a new object is created and assigned to the existing object at the same time.
[*] Assignment operator is called when an already initialized object is assigned a new value from another existing object.
