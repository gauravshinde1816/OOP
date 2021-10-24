## Polymorphism

- Polymorphism in Java is a concept by which we can perform a `single action in different ways.`
- Polymorphism is derived from 2 Greek words: poly and morphs. The word "poly" means many and "morphs" means forms. So polymorphism means many forms.

### Compile Time Polymorphism:

`Compile time polymorphism or static method dispatch is a process in which a call to an overloading method is resolved at compile time rather than at run time.`

#### Why Method Overloaing is not possible by changing the return type of method?

```class Calculation{
  int sum(int a,int b)
  {
    System.out.println(a+b);
  }
  double sum(int a,int b){
    System.out.println(a+b);
   }

  public static void main(String args[]){
  Calculation obj=new Calculation();
  int result=obj.sum(30,20); //Compile Time Error returns int
  }
}
```

### Type Promotion:

`As displayed in the above diagram, byte can be promoted to short, int, long, float or double. The short datatype can be promoted to int,long,float or double. The char datatype can be promoted to int,long,float or double and so on. `

- Example of typePromotion:
- ```class Calculation{
  void sum(int a,long b){System.out.println(a+b);}
  void sum(int a,int b,int c){System.out.println(a+b+c);}

  public static void main(String args[]){
  Calculation obj=new Calculation();
  obj.sum(20,20);//now second int literal will be promoted to long
  obj.sum(20,20,20);

  }
  }
  ```
