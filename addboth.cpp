#include <iostream>
using namespace std;

class B; // Forward declaration of class B

class A {
private:
    int data1;
public:
    A(int value) : data1(value) {} // Constructor to initialize data1

    // Friend function declaration to allow access to private members
    friend int addBoth(const A& a, const B& b);
};

class B {
private:
    int data2;
public:
    B(int value) : data2(value) {} // Constructor to initialize data2

    // Friend function declaration to allow access to private members
    friend int addBoth(const A& a, const B& b);
};

// Function to add data1 from A and data2 from B
int addBoth(const A& a, const B& b) {
    return a.data1 + b.data2;
}

int main() {
    A objA(5); // Create object of class A with data1 = 5
    B objB(10); // Create object of class B with data2 = 10

    int result = addBoth(objA, objB); // Add data1 and data2
    cout << "The sum of data1 and data2 is: " << result << endl;

    return 1;
}
