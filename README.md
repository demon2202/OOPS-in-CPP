# Object Oriented Programming with C++ 

This repository contains notes and explanations  of the "Object Oriented Programming with C++"
## Table of Contents
1. [Introduction to Object Oriented Approach](#introduction-to-object-oriented-approach)
2. [Procedural Programming Approach](#procedural-programming-approach)
3. [Merits of Object Oriented Programming](#merits-of-object-oriented-programming)
4. [Demerits of Object Oriented Programming](#demerits-of-object-oriented-programming)
5. [Characteristics of Object Oriented Language](#characteristics-of-object-oriented-language)
   - [Classes](#classes)
   - [Objects](#objects)
   - [Encapsulation](#encapsulation)
   - [Data Abstraction](#data-abstraction)
   - [Inheritance](#inheritance)
   - [Polymorphism](#polymorphism)
   - [Dynamic Binding](#dynamic-binding)
   - [Message Passing](#message-passing)
6. [References](#references)

## Introduction to Object Oriented Approach

### Why Object Oriented Programming?
Object-Oriented Programming (OOP) is a methodology or paradigm to design a program using classes and objects. It simplifies software development and maintenance by providing concepts like:
- **Objects**: Real-world entities such as pen, chair, table, etc.
- **Classes**: Templates that define the properties and behaviors of objects.
- **Encapsulation**: Wrapping data and methods into a single unit.
- **Inheritance**: Mechanism to create a new class using properties and methods of an existing class.
- **Polymorphism**: Ability to use a single interface to represent different underlying forms (data types).
- **Dynamic Binding**: Code that will execute is determined at runtime.
- **Message Passing**: Objects communicate by sending messages to each other.

## Procedural Programming Approach
In the procedural programming approach, the focus is on functions. High-level languages like COBOL, FORTRAN, and C are known as procedure-oriented programming languages. Each problem is divided into smaller problems, solved using specified modules that act on data.

### Key Points
- **Function-Centric**: The primary focus is on writing functions to accomplish tasks.
- **Global Data**: Many important data items are placed as global to be accessed by all functions.
- **Modularization**: Problems are solved by creating smaller, manageable functions.

## Merits of Object Oriented Programming

1. **Reusability**: Functions and modules written by one user can be reused by others without modification.
2. **Inheritance**: Reduces redundant code and allows the extension of existing classes.
3. **Data Hiding**: Programmers can hide data and functions within a class from other classes.
4. **Reduced Complexity**: Problems can be viewed as collections of different objects, reducing complexity.
5. **Easy to Maintain and Upgrade**: Modifying existing code is easier as new objects can be created with small differences.
6. **Message Passing**: Easier interface with external systems through message communication between objects.
7. **Modifiability**: Easy to make minor changes in data representation or procedures without affecting other parts of the program.

## Demerits of Object Oriented Programming

1. **Lengthy Programs**: Programs developed using OOP are larger in size, requiring more time to execute.
2. **Skill Requirement**: Programmers need brilliant designing and programming skills along with proper planning.
3. **Learning Curve**: OOP takes time to get used to, and the thought process involved may not be natural for some.
4. **Object Thinking**: Everything is treated as an object, requiring excellent object-oriented thinking.

## Characteristics of Object Oriented Language

### Classes
A class is a blueprint for creating objects. It contains member variables and member functions that operate on these variables. For example, if "Employee" is a class, an object "manager" can be created as:
```cpp
Employee manager;
```

### Objects
Objects are basic runtime entities that may represent real-world entities like a person, place, or bank account. They combine both data and functions into a single unit.

### Encapsulation
Encapsulation is the wrapping of data and functions into a single unit, known as a class. This helps in data hiding and protection from outside interference.

### Data Abstraction
Data abstraction is the process of hiding the implementation details and showing only the functionality to the user. This is achieved using abstract classes and interfaces.

### Inheritance
Inheritance is a mechanism where a new class is derived from an existing class, inheriting its properties and behaviors. This helps in code reusability and method overriding.

### Polymorphism
Polymorphism allows methods to do different things based on the object it is acting upon. It is achieved through method overloading and overriding.

### Dynamic Binding
Dynamic binding is the process where the code to be executed is determined at runtime. This allows for more flexible and reusable code.

### Message Passing
Objects communicate with each other by sending messages, making the interface with external systems easier.

## References
- Stanley B Lippman, Josee Lajoie, Barbara E Moo, “C++ Primer”, Fifth Edition, Addison-Wesley, 2012
- Bjarne Stroustrup, The C++ Programming Language, Addison Wesley, 4th Edition, 2013
- Harvey M. Deitel and Paul J. Deitel, C++ How to Program, 7th Edition, Prentice Hall, 2010
- Maureen Sprankle and Jim Hubbard, Problem Solving and Programming Concepts, 9th Edition, Pearson Education, 2014

---

This README file provides a comprehensive overview of the topics covered in  the "Object Oriented Programming with C++"
