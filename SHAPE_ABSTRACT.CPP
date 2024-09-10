#include <iostream>
using namespace std;
// Base class
class Shape {
public:
// Constructor
Shape() {
cout << "Shape Constructor called" << endl;
}
// Destructor
virtual ~Shape() {
cout << "Shape Destructor called" << endl;
}
// Regular function
void display() {
cout << "This is a Shape" << endl;
}
// Virtual function
virtual void draw() {
cout << "Drawing Shape" << endl;
}
};
// Derived class
class Circle : public Shape {
public:
// Constructor
Circle() {
cout << "Circle Constructor called" << endl;
}
// Destructor
~Circle() {
cout << "Circle Destructor called" << endl;
}
// Overriding the virtual function
void draw() override {
cout << "Drawing Circle" << endl;
}
// Additional function in derived class
void radius() {
cout << "Circle radius function" << endl;
}
};
int main() {
Shape* shapePtr; // Pointer to base class
Circle circleObj; // Object of derived class
shapePtr = &circleObj; // Point to the derived class object
// Early binding (static binding)
cout << "Early Binding:" << endl;
shapePtr->display(); // Calls Shape's display()
// Late binding (dynamic binding)
cout << "Late Binding:" << endl;
shapePtr->draw(); // Calls Circle's draw() due to virtual function
// Circle specific function call
cout << "Additional Derived Class Function:" << endl;
circleObj.radius(); // Calls Circle's radius()
return 0;
}