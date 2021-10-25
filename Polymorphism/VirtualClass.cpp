#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void show()
    {
        cout << "Member of class A";
    }
};

class B : virtual public A
{
public:
};

class C : public virtual A
{
};

class D : public C, public B
{
};

int main()
{
    D d;
    d.show();
}

/* 
Daimond Problem: 
        A
      /    \
     /       \
    B        C
    \        /
     \     /
        D

 */