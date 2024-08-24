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
class Faculty : public Employee {
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
class Tech_Assistant : public Employee {
public:
    Tech_Assistant(int id, string emp_name) : Employee(id, emp_name) {}

    void teach_lab() {
        cout << name << " is teaching in the lab." << endl;
    }
};

// Derived class Instructor
class Instructor : public Employee {
public:
    Instructor(int id, string emp_name) : Employee(id, emp_name) {}

    void get_details() {
        cout << "Instructor ID: " << emp_id << ", Name: " << name << endl;
    }
};

int main() {
    Faculty faculty1(1, "Dr. Smith");
    faculty1.teach_theory();
    faculty1.research();

    Tech_Assistant tech1(2, "Mr. Johnson");
    tech1.teach_lab();

    Instructor instructor1(3, "Ms. Davis");
    instructor1.get_details();

    return 0;
}
