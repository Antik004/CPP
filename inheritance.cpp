#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int emp_id;
    string name;
public:
    Employee(int id, string emp_name) : emp_id(id), name(emp_name) {}

    int get_emp_id() {
        return emp_id;
    }

    string get_name() {
        return name;
    }

    void admin_work() {
        cout << name << " is doing administrative work." << endl;
    }
};

// Derived class Faculty
class Faculty : virtual public Employee {
public:
    Faculty(int id, string emp_name) : Employee(id, emp_name) {}

    void teach_theory() {
        cout << name << " is teaching theory." << endl;
    }

    void research() {
        cout << name << " is doing research." << endl;
    }
};

// Derived class Tech_Assistant
class Tech_Assistant : virtual public Employee {
public:
    Tech_Assistant(int id, string emp_name) : Employee(id, emp_name) {}

    void teach_lab() {
        cout << name << " is teaching in the lab." << endl;
    }
};

// Derived class Instructor inherits from both Faculty and Tech_Assistant
class Instructor : public Faculty, public Tech_Assistant {
public:
    Instructor(int id, string emp_name) 
        : Employee(id, emp_name), Faculty(id, emp_name), Tech_Assistant(id, emp_name) {}

    void get_details() {
        cout << "Instructor ID: " << emp_id << ", Name: " << name << endl;
    }
};

int main() {
    Instructor instructor1(3, "Ms. Davis");
    instructor1.get_details();
    instructor1.teach_theory();  // From Faculty
    instructor1.teach_lab();     // From Tech_Assistant
    instructor1.admin_work();    // From Employee

    return 0;
}
