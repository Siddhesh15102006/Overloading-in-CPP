---
# 🧪 Experiment 13 :- Constructor Overloading in CPP

---

## 🔍 Aim:

To understand and implement constructor overloading and function overloading in C++, demonstrating how multiple constructors or functions can coexist with different parameter lists.

---

### 📖 Theory:
🛠️ Constructor Overloading:

Constructor overloading in C++ allows a class to have more than one constructor with different parameter lists. The correct constructor is selected based on the number and type of arguments passed when an object is created.

Key Points:

Enables flexibility in object initialization.

Improves readability and reusability of code.

Example:
class Sample {
public:
    Sample() { ... }               // Default constructor
    Sample(int a) { ... }          // Parameterized constructor
    Sample(int a, int b) { ... }   // Another constructor
};

🛠️ Function Overloading:

Function overloading allows multiple functions with the same name but different parameter types or counts. The compiler chooses the correct function based on the arguments passed during the function call.

Example:
void show(int);
void show(double);
void show(string);

---

## 📝 Experiment Questions and Answers
### 🔹 Q1. Function Overloading
✅ Syntax:
ReturnType FunctionName(ParamType1);
ReturnType FunctionName(ParamType1, ParamType2);
// And so on...

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Display {
public:
    void show(int a) {
        cout << "Integer: " << a << endl;
    }

    void show(double d) {
        cout << "Double: " << d << endl;
    }

    void show(string s) {
        cout << "String: " << s << endl;
    }
};

int main() {
    Display obj;
    obj.show(10);           // Calls show(int)
    obj.show(3.14);         // Calls show(double)
    obj.show("C++ OOP");    // Calls show(string)
    return 0;
}
```

---

🔹 Constructor Overloading Example
✅ Syntax:
ClassName();                      // Default constructor
ClassName(Type1);                // Constructor with one parameter
ClassName(Type1, Type2);         // Constructor with two parameters

💡 Logic / Code:
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Constructor with one argument
    Student(string n) {
        name = n;
        age = 0;
    }

    // Constructor with two arguments
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1;                  // Calls default constructor
    Student s2("Alice");         // Calls 1-arg constructor
    Student s3("Bob", 20);       // Calls 2-arg constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
```

---

✅ Conclusion:

We successfully implemented constructor overloading and function overloading in C++.

Constructor overloading enables flexible object creation based on the given parameters.

Function overloading allows using the same function name for different data types, increasing code clarity and functionality.

These concepts are foundational to object-oriented programming in C++ and help in building reusable, modular, and clean code.

---
