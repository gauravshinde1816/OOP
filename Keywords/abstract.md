## The Abstract Keyword:

'abstract' keyword is used to declare the method or a class as abstract.

### Abstract Class:

- Abstract classes may or may not contain abstract methods, i.e., methods without a body ( public void get(); )
- But, if a class has at least one abstract method, then the class must be declared abstract.
- If a class is declared abstract, it cannot be instantiated.
- To use an abstract class, you have to inherit it from another class, provide implementations for the abstract methods in it.
- If you inherit an abstract class, you have to provide implementations to all the abstract methods in it.

### Abstract Methods:

If you want a class to contain a particular method but you want the actual implementation of that method to be determined by child classes, you can declare the method in the parent class as an abstract.

- The abstract keyword is used to declare the method as abstract.

- You have to place the abstract keyword before the method name in the method declaration.

- An abstract method contains a method signature, but no method body.

- Instead of curly braces, an abstract method will have a semicolon (;) at the end.
