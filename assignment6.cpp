
#include <iostream>
using namespace std;

// Single Inheritance
class Teacher {
public:
    void showTeacher() {
        cout << "This is the Teacher class." << endl;
    }
};

class MathTeacher : public Teacher {
public:
    void showMathTeacher() {
        cout << "This is the MathTeacher class." << endl;
    }
};

// Multiple Inheritance
class Writer {
public:
    void showWriter() {
        cout << "Writer can write books." << endl;
    }
};

class Speaker {
public:
    void showSpeaker() {
        cout << "Speaker can give speeches." << endl;
    }
};

class Author : public Writer, public Speaker {
public:
    void showAuthor() {
        cout << "Author can write and speak." << endl;
    }
};

// Multilevel Inheritance
class LivingThing {
public:
    void breathe() {
        cout << "Living things breathe." << endl;
    }
};

class Bird : public LivingThing {
public:
    void fly() {
        cout << "Birds can fly." << endl;
    }
};

class Parrot : public Bird {
public:
    void speak() {
        cout << "Parrot can imitate sounds." << endl;
    }
};

// Hierarchical Inheritance
class Vehicle {
public:
    void showVehicle() {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle {
public:
    void showCar() {
        cout << "This is a car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void showBike() {
        cout << "This is a bike." << endl;
    }
};

// Hybrid Inheritance
class Person {
public:
    void showPerson() {
        cout << "This is a person." << endl;
    }
};

class Student : virtual public Person {
public:
    void study() {
        cout << "Student studies." << endl;
    }
};

class Employee : virtual public Person {
public:
    void work() {
        cout << "Employee works." << endl;
    }
};

class WorkingStudent : public Student, public Employee {
public:
    void showWorkingStudent() {
        cout << "Student studies and works." << endl;
    }
};

int main() {
    cout << "--- Single Inheritance ---" << endl;
    MathTeacher t;
    t.showTeacher();
    t.showMathTeacher();

    cout << "\n--- Multiple Inheritance ---" << endl;
    Author a;
    a.showWriter();
    a.showSpeaker();
    a.showAuthor();

    cout << "\n--- Multilevel Inheritance ---" << endl;
    Parrot p;
    p.breathe();
    p.fly();
    p.speak();

    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Car c;
    Bike b;
    c.showVehicle();
    c.showCar();
    b.showVehicle();
    b.showBike();

    cout << "\n--- Hybrid Inheritance ---" << endl;
    WorkingStudent ws;
    ws.showPerson();
    ws.study();
    ws.work();
    ws.showWorkingStudent();

    return 0;
}
