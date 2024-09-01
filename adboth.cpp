#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

// Class A
class A {
private:
    int data1;

public:
    // Constructor to initialize data1
    A(int value) : data1(value) {}

    // Declare addBoth as a friend function
    friend int addBoth(A&, B&);
};

// Class B
class B {
private:
    int data2;

public:
    // Constructor to initialize data2
    B(int value) : data2(value) {}

    // Declare addBoth as a friend function
    friend int addBoth(A&, B&);
};

// Function to add data1 from A and data2 from B
int addBoth(A &objA, B &objB) {
    return objA.data1 + objB.data2;
}

int main() {
    A objA(5);  // Initialize objA with data1 = 5
    B objB(10); // Initialize objB with data2 = 10

    int result = addBoth(objA, objB); // Call addBoth and pass the objects

    cout << "The sum of data1 and data2 is: " << result << endl;

    return 0;
}
