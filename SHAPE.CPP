#include <iostream> 
#include <cmath> 
using namespace std; 
class Shape { 
public: 
// Virtual functions to be overridden by derived classes 
virtual void inputDimensions() { 
cout << "This is the base class Shape. Please use a derived class." << endl; 
} 
virtual double calculateSurfaceArea() { 
return 0.0; 
} 
virtual double calculateVolume() { 
return 0.0; 
} 
}; 
class Cuboid : public Shape { 
private: 
double length, width, height; 
public: 
void inputDimensions() override { 
cout << "Enter length, width, and height of the cuboid: "; 
cin >> length >> width >> height; 
} 
double calculateSurfaceArea() override { 
return 2 * (length * width + width * height + height * length); 
} 
double calculateVolume() override { 
return length * width * height; 
} 
}; 
class Cone : public Shape { 
private: 
double radius, height; 
public: 
void inputDimensions() override { 
cout << "Enter radius and height of the cone: "; 
cin >> radius >> height; 
} 
double calculateSurfaceArea() override { 
double slantHeight = sqrt(height * height + radius * radius); 
return M_PI * radius * (radius + slantHeight); 
} 
double calculateVolume() override { 
return (M_PI * radius * radius * height) / 3; 
} 
}; 
class Cylinder : public Shape { 
private: 
double radius, height; 
public: 
void inputDimensions() override { 
cout << "Enter radius and height of the cylinder: "; 
cin >> radius >> height; 
} 
double calculateSurfaceArea() override { 
return 2 * M_PI * radius * (radius + height); 
} 
double calculateVolume() override { 
return M_PI * radius * radius * height; 
} 
}; 
int main() { 
Shape* shape = nullptr; 
int choice; 
cout << "Choose a shape:\n1: Cuboid\n2: Cone\n3: Cylinder\nEnter your choice: "; 
cin >> choice; 
switch (choice) { 
case 1: 
shape = new Cuboid(); 
break; 
case 2: 
shape = new Cone(); 
break; 
case 3: 
shape = new Cylinder(); 
break; 
default: 
cout << "Invalid choice!" << endl; 
return 1; 
} 
shape->inputDimensions(); 
cout << "Surface Area: " << shape->calculateSurfaceArea() << endl; 
cout << "Volume: " << shape->calculateVolume() << endl; 
delete shape; 
return 0; 
}
