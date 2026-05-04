*This project has been created as part of the 42 curriculum by [mruiz-ur].*

## Description

CPP Module 04 is the fifth C++ module of the 42 curriculum. It focuses on polymorphism, abstract classes, and deeper inheritance concepts. The goal is to learn how C++ chooses methods at runtime and how to design class hierarchies that rely on interfaces and virtual functions.

### Exercises

- **ex00 - Polymorphism**: explore virtual functions and runtime behavior.
- **ex01 - I don't want to set the world on fire**: work with deep copies and dynamic memory in a class hierarchy.
- **ex02 - Abstract class**: implement an abstract animal hierarchy with derived classes.

### Compiling each exercise

Go inside the exercise folder and run:

```bash
make
```

To rebuild from scratch, use:

```bash
make re
```

### Cleaning files

To remove object files and the executable:

```bash
make clean
make fclean
```

## Submission

Submit the completed exercises from this module following the 42 requirements. Each exercise should compile with `-Wall -Wextra -Werror -std=c++98`.

## Resources

### Concepts studied

- **Polymorphism** — calling derived behavior through base pointers or references
- **Virtual functions** — enabling runtime method dispatch
- **Abstract classes** — defining interfaces that cannot be instantiated
- **Deep copy** — copying owned resources correctly

### References

- [C++ reference](https://en.cppreference.com/)
- [42 C++ Module subject](https://cdn.intra.42.fr/pdf/pdf/136821/en.subject.pdf)

### AI usage

ChatGPT was used to clarify the module description.