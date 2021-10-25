## Encapsulation:

- `Encapsulation` is the ability to package data, related behavior in an object bundle and control/restrict access to them (both data and function) from other objects.

## How to achieve ?

- Encapsulation in java is achieved by using private members and public methods.

- Define public setter and getter methods to modify and view the variables' values and access them outside the class only through getters and setters.

```
public class Employee
{
	private String name;

	public String getName()
	{
		return name;
	}
	public void setName(String name)
	{
		this.name=name
	}
}

class EncapTest
{
	public static void main(String[] args)
	{
		Employee e=new Employee();
		e.setname("XYZ");
		System.out.println(e.getName());
	}
}

```
