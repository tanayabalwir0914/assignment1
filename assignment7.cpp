
#include <iostream>
using namespace std;

// Compile-time polymorphism
class Calculator {
public:

    // Function Overloading
    int multiply(int a, int b) {
        return a * b;
    }

    int multiply(int a, int b, int c) {
        return a * b * c;
    }
};

// Base class
class Animal {
public:
    virtual void sound() {
        cout << "Animal makes a sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks." << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows." << endl;
    }
};

int main() {
    Calculator calc;

    cout << "--- Compile-Time Polymorphism ---" << endl;

    cout << "Product of two numbers: "
         << calc.multiply(5, 4) << endl;

    cout << "Product of three numbers: "
         << calc.multiply(2, 3, 4) << endl;

    Dog d;
    Cat c;
    Animal* animal;

    cout << "\n--- Run-Time Polymorphism ---" << endl;

    animal = &d;
    animal->sound();

    animal = &c;
    animal->sound();

    return 0;
}
