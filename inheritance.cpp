
#include <iostream>
#include <string>

// Base class
class Person {
protected:                           // Accessible to derived classes
    std::string name;
    int age;
    
public:
    // Constructor
    Person(std::string n, int a) : name(n), age(a) {}

    // Virtual function for overriding
    virtual void displayInfo() const {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }
    
    // Getter functions
    std::string getName() const { return name; }
    int getAge() const { return age; }
};

// Derived class: Student
class Student: public Person {
private:
    std::string studentID;
    double gpa;

public:
     // Constructor
     Student(std::string n, int a, std::string id, double g)
         : Person(n, a), studentID(id), gpa(g) {}

    // Override displayInfo
    void displayInfo() const override {
        std::cout << "Student - Name: " << name << ", Age: " << age
                  << ", ID: " << studentID << ", GPA: " << gpa << std::endl;
    }

    // Additional memeber function
    void updateGPA(double newGPA) {
        if (newGPA >= 0.0 && newGPA <= 4.0) {
            gpa = newGPA;
        }
    }

};

// Derived class: Teacher
class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    // Constructor
    Teacher(std::string n, int a, std::string subj, double sal)
         : Person(n, a), subject(subj), salary(sal)  {}

    // Override displayInfo
    void displayInfo() const override {
        std::cout << "Teacher - Name: " << name << ", Age: " << age
                  << ", Subject: " << subject << ", Salary: $" << salary << std::endl;
    }

    // Additional member function
    void giveRise(double amount) {
        if (amount > 0) {
            salary += amount;
        }
    }
};

int main() {
    // Create objects
    Student student("Alice Smith", 20, "S12345", 3.8);
    Teacher teacher("Dr. John Doe", 45, "Mathematics", 75000.0);

    // Display information
    std::cout << "Initial Information: " << std::endl;
    student.displayInfo();
    teacher.displayInfo();

    // Modify data
    student.updateGPA(3.9);
    teacher.giveRise(5000.0);

    // Display updated information
    std::cout << "\nUpdated Information: " << std::endl;
    student.displayInfo();
    teacher.displayInfo();

    // Demonstrate polymorphism
    std::cout << "\nPolymorphic Behavior: " << std::endl;
    Person* people[] = { &student, &teacher };
    for (const auto& person : people) {
        person->displayInfo();
    }

    return 0;

}

