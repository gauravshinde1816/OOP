# Inheritance

- Inheritance in Java is a mechanism in which one object acquires all the properties and behaviors of a parent object.
- Inheritance represents the `IS-A relationship` which is also known as a parent-child relationship.

* Why use inheritance in java

  - For Method Overriding (so runtime polymorphism can be achieved).
  - For Code Reusability.

```
class Subclass-name extends Superclass-name
{
   //methods and fields
}

```

### Object-oriented programming without inheritance:

- Go doesn't have inheritance – instead `composition, embedding and interfaces `support code reuse and polymorphism.

### Advantages Of Inheritance:

- Inheritance promotes reusability. When a class inherits or derives another class, it can access all the functionality of inherited class.
- ` Reusability => reliability => leads to less development and maintenance costs => reduce code redundancy => supports code extensibility`

### Disadvantages of Inheritance:

- Inherited functions work slower than normal function as there is indirection.
- Improper use of inheritance may lead to wrong solutions.
- Often, data members in the base class are left unused which may lead to memory wastage.
- Inheritance increases the coupling between base class and derived class. A change in base class will affect all the child classes.

### Sealed Modifier:

- Sealed is keyword if we want `stop inheritance` then we use Seale before class & for `stopping ovrriding` we use Sealed before method.

### What is the difference between method overloading and method hiding in Java?

- method hiding:

  - When super class and the sub class contains same methods including parameters, and if they are static and, when called, the super class method is hidden by the method of the sub class this is known as method hiding.

  ```
  class Demo{
   public static void demoMethod() {
      System.out.println("method of super class");
   }
  }
  public class Sample extends Demo{
   public static void demoMethod() {
      System.out.println("method of sub class");
   }
   public static void main(String args[] ){
      Sample.demoMethod();
   }
  }

  ```

## Friend Class:

- A friend class can access private and protected members of other class in which it is declared as friend.

### Friend Function:

- `Friend Function` Like friend class, a friend function can be given a special grant to access private and protected members. A friend function can be:

  - A member of another class
  - A global function

- Friendship is not mutual. If class A is a friend of B, then B doesn’t become a friend of A automatically.

- Friendship is not inherited

### Example of friend class

```
#include <iostream>
class A {
private:
	int a;

public:
	A() { a = 0; }
	friend class B; // Friend Class
};

class B {
private:
	int b;

public:
	void showA(A& x)
	{
		// Since B is friend of A, it can access
		// private members of A
		std::cout << "A::a=" << x.a;
	}
};

int main()
{
	A a;
	B b;
	b.showA(a);
	return 0;
}
```

### friend function of another class:

```
#include <iostream>

class B;

class A {
public:
	void showB(B&);
};

class B {
private:
	int b;

public:
	B() { b = 0; }
   /* Function of class A declared as a friend function of class B */
	friend void A::showB(B& x);
};

void A::showB(B& x)
{
	// Since showB() is friend of B, it can
	// access private members of B
	std::cout << "B::b = " << x.b;
}

int main()
{
	A a;
	B x;
	a.showB(x);
	return 0;
}
```

### Global function as a friend function:

```
#include <iostream>

class A {
	int a;

public:
	A() { a = 0; }

	// global friend function
	friend void showA(A&);
};

void showA(A& x)
{
	// Since showA() is a friend, it can access
	// private members of A
	std::cout << "A::a=" << x.a;
}

int main()
{
	A a;
	showA(a);
	return 0;
}
```

### Does overloading work with Inheritance?

```
#include <iostream>
using namespace std;
class Base
{
public:
	int f(int i)
	{
		cout << "f(int): ";
		return i+3;
	}
};
class Derived : public Base
{
public:
	double f(double d)
	{
		cout << "f(double): ";
		return d+3.3;
	}
};
int main()
{
	Derived* dp = new Derived;
	cout << dp->f(3) << '\n';
	cout << dp->f(3.3) << '\n';
	delete dp;
	return 0;
}
```

```
output:
f(double): 6.3
f(double): 6.6

```

- Overloading doesn’t work for derived class in C++ programming language.
- There is no overload resolution between Base and Derived.
- The compiler looks into the scope of Derived, finds the single function “double f(double)” and calls it.
- It never disturbs with the (enclosing) scope of Base.
