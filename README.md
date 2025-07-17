# 🧠 C++ OOP Inheritance Project

## 📁 File: `inheritance.cpp`

### 🚀 Objective:
Demonstrate the use of **Object-Oriented Programming (OOP)** principles in C++ using:
- Inheritance
- Access specifiers (`public`, `protected`, `private`)
- Constructor chaining
- Virtual functions and method overriding
- Polymorphism (runtime dynamic dispatch)

---

### 🔧 Features Implemented:

#### 👤 Base Class – `Person`
- Stores common attributes: `name` and `age`
- Provides a virtual method: `displayInfo()`
- Getter methods: `getName()`, `getAge()`

#### 🎓 Derived Class – `Student`
- Inherits from `Person`
- Adds: `studentID` and `GPA`
- Overrides `displayInfo()`
- Extra method: `updateGPA(double newGPA)`

#### 👨‍🏫 Derived Class – `Teacher`
- Inherits from `Person`
- Adds: `subject` and `salary`
- Overrides `displayInfo()`
- Extra method: `giveRise(double amount)`

---

### 📌 Concepts Demonstrated:

| Concept           | Description |
|------------------|-------------|
| **Inheritance**   | `Student` and `Teacher` inherit from `Person` using `public` inheritance |
| **Access Specifiers** | `name` and `age` are `protected` in base class; accessible in derived |
| **Constructor Chaining** | Derived class constructors call base class constructor using initializer list |
| **Function Overriding** | `displayInfo()` is overridden in derived classes |
| **Polymorphism**  | Base class pointer (`Person*`) calls overridden methods in `Student` and `Teacher` objects |

---

### 🖥️ Output Snapshot:

Initial Information:
Student - Name: Alice Smith, Age: 20, ID: S12345, GPA: 3.8
Teacher - Name: Dr. John Doe, Age: 45, Subject: Mathematics, Salary: $75000

Updated Information:
Student - Name: Alice Smith, Age: 20, ID: S12345, GPA: 3.9
Teacher - Name: Dr. John Doe, Age: 45, Subject: Mathematics, Salary: $80000

Polymorphic Behavior:
Student - Name: Alice Smith, Age: 20, ID: S12345, GPA: 3.9
Teacher - Name: Dr. John Doe, Age: 45, Subject: Mathematics, Salary: $80000


---

### 📂 Project Structure:

cpp-basics/
└── day4/
└── inheritance.cpp
└── README.md


---

### ✅ How to Compile and Run:
```bash
g++ inheritance.cpp -o inheritance
./inheritance

🧠 Learning Outcome:
Mastery of C++ class hierarchy and inheritance

Use of virtual functions for polymorphism

Clean and scalable class design

📝 Author:
Shankar Kumar
C++ OOP Practice | Day 04 of AI Mastery Plan
GitHub: Shank312
