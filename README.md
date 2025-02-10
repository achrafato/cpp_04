## 📁 Exercises

### Ex00: Animal Base Class
The base `Animal` class with basic attributes and virtual functions. The first step in creating polymorphic behavior.
```
Files:
├── Animal.hpp
├── Animal.cpp
├── Dog.hpp
├── Dog.cpp
├── Cat.hpp
├── Cat.cpp
├── WrongAnimal.hpp
├── WrongAnimal.cpp
├── WrongCat.hpp
├── WrongCat.cpp
└── main.cpp
```

### Ex01: Animal with Brain
Expanding the base classes to introduce a `Brain` class, associated with both `Dog` and `Cat`. A non-polymorphic version of the `WrongAnimal` and `WrongCat` classes is also included.
```
Files:
├── Animal.hpp
├── Animal.cpp
├── Dog.hpp
├── Dog.cpp
├── Cat.hpp
├── Cat.cpp
├── Brain.hpp
├── Brain.cpp
├── WrongAnimal.hpp
├── WrongAnimal.cpp
├── WrongCat.hpp
├── WrongCat.cpp
└── main.cpp
```

### Ex02: AAnimal and Materia
Introduces an abstract base class `AAnimal`, which `Dog` and `Cat` inherit. Additionally, begins the implementation of the Materia system.
```
Files:
├── AAnimal.hpp
├── AAnimal.cpp
├── Cat.hpp
├── Cat.cpp
├── Dog.hpp
├── Dog.cpp
├── Brain.hpp
├── Brain.cpp
├── WrongAnimal.hpp
├── WrongAnimal.cpp
├── WrongCat.hpp
├── WrongCat.cpp
└── main.cpp
```

### Ex03: Materia System
The system becomes more complex, with abstract classes and interfaces for Materia and Character classes. Inheritance is extended to handle Materia sources and character interactions.
```
Files:
├── AMateria.hpp
├── AMateria.cpp
├── Character.hpp
├── Character.cpp
├── Cure.hpp
├── Cure.cpp
├── Ice.hpp
├── Ice.cpp
├── ICharacter.hpp
├── IMateriaSource.hpp
├── MateriaSource.hpp
├── MateriaSource.cpp
└── main.cpp
```

## 🤖 Class Features

### AAnimal
```cpp
class AAnimal {
protected:
    std::string type;

public:
    virtual void makeSound() const = 0;
    std::string getType() const;
    virtual ~AAnimal();
};
```

### Animal
```cpp
class Animal : public AAnimal {
public:
    virtual void makeSound() const override;
    // Additional shared animal features
};
```

### Dog
```cpp
class Dog : public Animal {
public:
    void makeSound() const override;
    // Dog-specific features
};
```

### Cat
```cpp
class Cat : public Animal {
public:
    void makeSound() const override;
    // Cat-specific features
};
```

### Brain
```cpp
class Brain {
public:
    void think() const;
    // Brain features associated with Animal
};
```

### WrongAnimal
```cpp
class WrongAnimal {
public:
    void makeSound() const;
};
```

### WrongCat
```cpp
class WrongCat : public WrongAnimal {
public:
    void makeSound() const;
};
```

## 🎯 Learning Objectives

1. Inheritance and Polymorphism
   - Virtual and non-virtual inheritance
   - Overriding methods in derived classes

2. Abstraction
   - Abstract base classes (`AAnimal`)
   - Interface implementation (Materia system)

3. Constructor/Destructor Management
   - Handling dynamic memory in inheritance chains
   - Managing resources in derived classes

4. Brain Composition
   - Associating a `Brain` class with animals
   - Encapsulation and composition

## 🛠️ Implementation Requirements

- Classes should follow the Orthodox Canonical Form.
- Virtual destructors in polymorphic base classes.
- Memory leak prevention through proper resource management.
- Clear and consistent naming conventions.
- Proper use of access specifiers.

## 🧪 Testing Guidelines

### Ex00: Animal Base Class
```cpp
Animal *dog = new Dog();
Animal *cat = new Cat();
dog->makeSound();  // Should print Dog sound
cat->makeSound();  // Should print Cat sound
```

### Ex01: Animal with Brain
```cpp
Dog dog;
dog.getBrain()->think();  // Test the brain association
```

### Ex02: AAnimal and Materia
```cpp
AAnimal *aDog = new Dog();
aDog->makeSound();  // Test polymorphism

// Test Materia functionality later in the exercises
```

### Ex03: Materia System
```cpp
AMateria *ice = new Ice();
AMateria *cure = new Cure();
MateriaSource materiaSource;
materiaSource.learnMateria(ice);
materiaSource.learnMateria(cure);
```

## ⚠️ Common Issues to Watch

1. Memory Management
   - Properly deleting dynamic memory
   - Use of virtual destructors

2. Polymorphism
   - Ensuring proper method overriding
   - Checking that correct version of overridden methods is called

3. Incorrect Class Associations
   - Ensuring that `Brain` is correctly linked to `Dog` and `Cat`

## 📝 Style Requirements

- Consistent and descriptive class names
- Well-organized header and source files
- Proper indentation and documentation
- Clear and readable code

## 🔍 Debugging Tips

1. Check Inheritance and Polymorphism
   - Use `typeid` or debugging tools to ensure the correct object types are being used
   - Ensure virtual functions are properly overridden

2. Debug Memory Leaks
   - Use tools like Valgrind to detect and fix memory leaks
   - Ensure destructors are called correctly

3. Verify Constructor/Destructor Calls
   - Print messages in constructors/destructors to verify proper order of execution

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
