*This project has been created as part of the 42 curriculum by [mruiz-ur].*

## Description

CPP Module 03 is the fourth C++ module of the 42 curriculum. It introduces inheritance and class hierarchies through the ClapTrap family of exercises. The goal is to practice how derived classes extend and specialize base class behavior.

### Exercises

- **ex00 - ClapTrap**: create a basic combat robot class.
- **ex01 - ScavTrap**: extend ClapTrap with new stats and a guard mode.
- **ex02 - FragTrap**: add another derived class with its own special ability.

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

- **Inheritance** — building classes on top of a base class
- **Encapsulation** — keeping class state controlled through methods
- **Class specialization** — adding behavior in derived classes
- **Constructor chaining** — initializing base and derived parts correctly

### References

- [C++ reference](https://en.cppreference.com/)
- [42 C++ Module subject](https://cdn.intra.42.fr/pdf/pdf/136821/en.subject.pdf)

### AI usage

ChatGPT was used to clarify the module description.