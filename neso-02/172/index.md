What is a data tyep?

Data types defines:

- A certain domain of values.
- Operations allowed on those values.
  for instance: on integers bitwise is allowed but not in floating-point numbers.

Besides primtive data types, there is a concept of user defined data types. (using the typedef keyword)
That means that operations and values are defined by the user, the programmer.

Example: Structure, union and enumeration.

By using structures for example, we are effectively defining our own custom data type by combining
other data types.

## ADT (Abstract Data Types)

ADT is a way to define what operations can be done on a data structure without exposing how
they are implemented. Usually using functions to expose the interface (like methods).

Note that ADT is the conceptual foundation of OOP data structures.

The program which uses it is called a client program.
What is the advantage?
We can change the inner implementation without having to change the code that depends on this interface.
Which improves maintainability.
