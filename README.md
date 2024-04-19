# OOPs Interview Questions in 2024

## Table of Contents
1. [Basic OOPs Interview Questions]
2. [OOPs Interview Questions for Experienced]
3. [Frequently Asked OOPs Interview Questions]

---

## Basic OOPs Interview Questions

## 1. What is OOPs?
Programmers can use objects to represent real-world circumstances thanks to object-oriented programming. Any entity with states and behaviors is an object. While methods define an item’s behaviors, states reflect the characteristics or data of an entity. Objects include students, workers, books, etc. By exchanging messages, these things communicate with one another. A class is also a template for building an object. A class is required in order to generate objects. For instance, there needs to be an Employee class in order to generate an Employee object.

## 2. Difference between Procedural programming and OOPs?
Procedural Programming	Oops
Procedural Programming is based on functions.	Object-oriented programming is based on real-world objects.
It shows the data to the entire program.	It encapsulates the data.
It does not have a scope for code reuse.	It provides more scope for code reuse.
It follows the concept of top-down programming.	It follows a bottom-up programming paradigm.
The nature of the language is complicated.	It is less complicated in nature, so it is easier to modify, extend and maintain.
It is hard to modify, extend and maintain the code.

## 3. Why use OOPs?
Programming with OOP lets you package together data states and functionality to change those data states while keeping the specifics secret (Consider the analogy of a car, you can only see the steering of the car while driving, the circuitry behind it is hidden from you). As a result, OOP design produces flexible, modular, and abstract code. Because of this, it is very helpful for developing larger programs. Using classes and objects, you may include OOP into your code. The objects you construct will have the states and capabilities of the class to which they belong.


## 4. What are the basic concepts of OOPs?
The basic concepts of OOPs are:

Inheritance
Encapsulation
Polymorphism
Abstraction

## 5. What is Encapsulation?
Encapsulation is also a part of the OOPs concept. It refers to the bundling of data with the methods that operate on that data. It also helps to restrict any direct access to some of an object’s components.

## 6. What is Abstraction?
Abstraction is an OOPs concept to build the structure of real-world objects. It “shows” only essential attributes and “hides” unnecessary information from the outside. The main focus of abstraction is to hide unnecessary details from the users. It is one of the most important concepts of OOPs.

## 7. What is method overloading?
There is a concept where two or more methods can have the same name. But they should have different parameters, different numbers of parameters, different types, or both. These methods are known as overloaded methods and this feature is called method overloading. 

## 8. What is method overriding?
Method overriding is a concept of object-oriented programming.

It is a language feature that allows a subclass or child class to provide a specific implementation of a method which is already provided by one of its superclasses or parent classes.

## 9. Types of Inheritance in OOPS
Different types of inheritances in OOps are as follows:

Single Inheritance
Multiple Inheritance
Multi-level Inheritance
Multi-path Inheritance
Hierarchical Inheritance
Hybrid Inheritance
types of inheritance

## 10. What are the main features of OOPs?
The main features of OOPs are given as follows:

In OOP, you combine the code into one unit so you can specify the parameters of each piece of data. This process of wrapping up data into a single unit is called encapsulation. 
By using classes, you can generalise your object types and make your application easier to use. This is termed as an abstraction.
The ability for a class to inherit characteristics and behaviours from another class allows for more code reuse.
Polymorphism allows for the creation of several objects from a single, adaptable class of code.

## 11. Is it possible to call the base class method without creating an instance?
Yes, we can possibly call the base class method without creating an instance in the following 3 cases:

If the method is static
Calling the inherited method inside a derived class
Calling the method using the base keyword from the sub-classes
The most popular case is that of the static methods.

## 12. What are the limitations of OOPs?
Following are some of the common limitations of OOPs:

## 13. Types of constructor
Types of constructors depend upon languages

Private Constructor
Default Constructor
Copy Constructor
Static Constructor
Parameterized Constructor
Types of constructor

## 14. What languages come under the oops concept?
Simula is known as the first object-oriented programming language, the most popular OOP languages are:

Java
JavaScript
Python
C++
Visual Basic
.NET
Ruby
Scala
PHP
Check out the OOPs concept in Python Video.

## 15. What is inheritance?
Whenever one class is derived from another, it is referred to as inheritance. The child class will inherit all of the parent class’s public and protected properties and methods. Apart from the attributes and methods inherited from the parent class, it can also have its own additional set of features. The’ extends’ keyword is used to specify an inherited class.

If you derive a  class from another class that is known as inheritance. The child class will inherit all the public and protected properties and methods from the parent class. The child class can also have its own properties and methods. An inherited class is defined by using the extends keyword.

## 16. What is hybrid inheritance?
The type of inheritance formed by the combination of different types of inheritances like single, multiple inheritances, etc. is classified as hybrid inheritance.

## 17. What is hierarchical inheritance?
In the case of a hierarchical inheritance, multiple subclasses inherit from a parent class. Hierarchical inheritance is a type of inheritance in which multiple classes are descended from a single parent or base class. For example, the fruit class can have ‘apple’, ’mango’, ’banana’, ‘cherry’ etc. as its subclasses.

## 18. What are the limitations of inheritance?
It Increases the execution time and effort. It also requires jumping back and forth between different classes. The parent class and the child class are always tightly coupled. Afford modifications in the program would require changes for the parent and the child’s class. Inheritance requires careful implementation otherwise it would lead to incorrect results.

## 19. What is Polymorphism?
Polymorphism is one of the most used and core concepts in OOP languages. It explains the concept of different classes can be used with the same interface. Each of these classes can have its own implementation of the interface. 

## 20. What is static polymorphism?
In OOP, static polymorphism determines which method to call at compile time. For the same trigger with static polymorphism, the object might respond differently. Function, constructor and operator overloading are examples of static polymorphism.

## 21. What is dynamic polymorphism?
Dynamic polymorphism is a method or process that handles a call to an overridden method during runtime rather than at compile time. It is also referred to as dynamic method dispatch or runtime polymorphism. Using method overriding, we can create dynamic polymorphism. An example of runtime polymorphism: is method overriding.

## 22. What is operator overloading?
The user-defined data type is given a special meaning by the operator using operator overloading. It is a compile-time polymorphism.

## 23. Differentiate between overloading and overriding.
When two or more methods in the same class have the same name but different parameters, this is referred to as overloading. The technique of using the same method signature, i.e., name and parameters, in both the superclass and the child class is known as overriding.

---

## OOPs Interview Questions for Experienced

## 1. What is an interface?
An interface is a user-defined data type and is a collection of abstract methods. A class implements an interface, thereby inheriting the abstract methods of the interface. A class describes an object’s attributes and behaviours, and an interface contains behaviours that a class implements. The Class represents “how,” and the interface represents “what’.

## 2. What are pure virtual functions?
A pure virtual function/method is a function whose implementations are not provided in the base class, and only a declaration is provided. The pure virtual function can have its implementation code in the derived class; otherwise, the derived class will also be considered an abstract Class. The Class containing pure virtual functions is abstract.

## 3. Differentiate between a class and a method.
A class is a blueprint of objects, and it consists of the properties and behaviour of the objects.
Methods are programming constructs that perform specific tasks/behaviour.

## 4.  Differentiate between an abstract class and an interface?
An interface can have only abstract methods, but an Abstract class can have abstract and non-abstract methods.
The interface should be used if just the requirement specification is known and nothing about implementation. If the implementation is known, but partially, then an abstract class should be used. If the implementation is known completely, then a concrete Class should be used.

## 5. What are the limitations of OOPs?
Larger Program size – Programs can become lengthy if written using OOps concepts compared to procedure-oriented programming.
Slower execution – As the number of lines of code to be executed is more comparatively, the execution time is also more.
Not suitable for all types of Problems.
Testing time is also higher for OOP Solutions.

## 6. What are the characteristics of an abstract class?
A class having at least one pure virtual function is called an Abstract class.
An Abstract class cannot have objects created, i.e., an abstract class cannot be instantiated, but Object references can be created.
An Abstract class can have non-abstract functions and pure virtual functions also.
The pure virtual function can have its implementation code in the derived class; otherwise, the derived class will also be considered an abstract Class

## 7. What is constructor chaining?
Constructor chaining is a method to call one constructor from another concerning a current object reference. It can be done in two ways: –

Using the “this” keyword, the reference can be made to the constructor in the current class.
To call the constructor from the base class “super” keyword will be used.

## 8. What is Coupling in OOP, and why is it helpful?
The degree of dependency between the components is called coupling.
Types of Coupling
A. Tight Coupling – If the dependency between components is high, these components are called tightly coupled.

## 9. What is Cohesion in OOP?
The modules having well-defined and specific functionality are called cohesion.
Advantages
It improves the maintainability and reusability of code.

## 10. What are the levels of data abstraction?
Highlighting the set of services by hiding internal implementation details is called abstraction.
By using abstract Class and interface, we can implement abstraction

## 11. What are the types of variables in OOP?
Variables are basic units to store data in RAM for Python programs.

- Primitive Variables: It is used to represent primitive values like int, float, etc.
- Reference Variables: It is used to refer to objects in Java.
- Instance Variables: Variables whose value varied from object to object are instance variables. For every 
  object, a separate copy of the instance variable is created. Instance variables are declared within the 
  Class and outside any method/block/constructor
- Static variables: For static Variables, a single copy of the variable is created, and that copy is 
  shared between every Class object. The static variable is created during class loading and destroyed at 
  class unloading.
- Static variables can be accessed directly from the static and instance area. We are not required to 
  perform initialization explicitly for static variables, and JVM will provide default values.
- Local Variables: Variables declared inside a method or block or constructor are local variables. Hence 
  the scope of local variables is the same as the block’s scope in which we declared that variable.

----
## Frequently Asked OOPs Interview Questions

## Q: What are the 4 basics of OOP? 

A: OOP stands for Object-Oriented Programming, and its four basic principles are Encapsulation, Abstraction, Polymorphism, and Inheritance. OOP enables programmers to consider software development as if they are working with actual entities. In OOP, some objects have a field where data/knowledge can be stored and can do several methods.

## Q: What is the object-oriented programming interview? 

A: Object-Oriented Programming, also usually called OOPS, is a kind of programming that is more object-based and not just based on functions or procedures. Individual objects are collected into several classes. Real-world entities such as inheritance, polymorphism, and hiding are implemented by OOPS into programming. It also enables binding data as well as code together.

## Q: What are the 3 principles of OOP? 

A: The three main principles of Object-Oriented Programming are Encapsulation, inheritance, and polymorphism.

## Q: What is the concept of OOPS?

A: OOPS or Object-Oriented Programming System is a programming concept that mainly works based on Encapsulation, Abstraction, Polymorphism, and Inheritance. The usual concept of OOPs is to create objects, use them again all through the program, and finally manipulate these objects to fetch our results.

## Q: Why is OOPS used? 

A: The main aim of an Object-Oriented Programming System is to implement real-world entities such as polymorphism, inheritance, hiding, and many more in programming. The aim lies in binding together the data as well as functions that work on them so that other parts of the code cannot access the data other than that function.

## Q: What is polymorphism in OOPS? 

A: Polymorphism in an Object-Oriented Programming System is a feature of object-based programming languages that enable a particular routine to use variables of several types at different times. It can also be called the ability of a programming language to present the same interface for different primary data types.

## Q: Who is the father of OOPS? 

A: The father of the Object-Oriented Programming System is considered to be Alan Kay by some people. He identified some characteristics as basics to OOP Kay 1993:1. He coined OOPs around 1966 or 1967 when he was at grad school.

## Q: What are the main features of OOPS? 

A: Some of the main features in OOPS include Classes, Objects, Data Abstraction, Encapsulation, Inheritance, and Polymorphism. OOP is a programming paradigm that is based on the idea of objects.

## Q: What are the advantages of OOPS?

A: Since OOP is one of the main development approaches which is easily accepted, the advantages are many. Some of the advantages of OOPS include Reusability, Data Redundancy, Code Maintenance, Security, Design Benefits, Easy Troubleshooting, Better Productivity, Polymorphism Flexibility, and Problem-solving.
