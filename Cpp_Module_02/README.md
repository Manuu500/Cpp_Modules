*This project has been created as part of the 42 curriculum by [mruiz-ur].*

## Description

CPP Module 02 is the third C++ module of the 42 curriculum. It focuses on fixed-point numbers, the Orthodox Canonical Form, and operator overloading. The goal is to understand how to design small C++ classes with predictable behavior and proper value semantics.

### Exercises

- **ex00 - My First Canonical Class**: implement a basic fixed-point class with canonical form.
- **ex01 - Towards a more useful fixed-point number class**: extend the class with constructors and conversion helpers.
- **ex02 - Fixed-point arithmetic**: add arithmetic and comparison operators to the fixed-point class.

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

- **Orthodox Canonical Form** — constructors, copy constructor, assignment operator, and destructor
- **Fixed-point numbers** — representing fractional values without floating-point types
- **Operator overloading** — defining arithmetic and comparison behavior
- **Value semantics** — copying and assigning objects safely

### References

- [C++ reference](https://en.cppreference.com/)
- [42 C++ Module subject](https://cdn.intra.42.fr/pdf/pdf/136821/en.subject.pdf)

### AI usage

ChatGPT was used to clarify the module description.