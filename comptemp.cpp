#include <iostream>
using namespace std;

template <typename T>
class Complex {
private:
    T* real;
    T* imag;

public:
    // Constructor
    Complex(T r = 0, T i = 0) {
        real = new T(r);
        imag = new T(i);
    }

    // Copy Constructor
    Complex(const Complex& other) {
        real = new T(*(other.real));
        imag = new T(*(other.imag));
    }

    // Destructor
    ~Complex() {
        delete real;
        delete imag;
    }

    // Add two complex numbers
    Complex operator+(const Complex& other) {
        Complex temp;
        *temp.real = *real + *other.real;
        *temp.imag = *imag + *other.imag;
        return temp;
    }

    // Subtract two complex numbers
    Complex operator-(const Complex& other) {
        Complex temp;
        *temp.real = *real - *other.real;
        *temp.imag = *imag - *other.imag;
        return temp;
    }

    // Multiply two complex numbers
    Complex operator*(const Complex& other) {
        Complex temp;
        *temp.real = (*real * *other.real) - (*imag * *other.imag);
        *temp.imag = (*real * *other.imag) + (*imag * *other.real);
        return temp;
    }

    // Display the complex number
    void display() const {
        cout << *real << " + " << *imag << "i" << endl;
    }
};

int main() {
    // Instantiate complex numbers
    Complex<int> c1(1, 2); // 1 + 2i
    Complex<int> c2(3, 4); // 3 + 4i

    // Add
    Complex<int> cAdd = c1 + c2;
    cout << "Addition: ";
    cAdd.display();  // Output: 4 + 6i

    // Subtract
    Complex<int> cSub = c1 - c2;
    cout << "Subtraction: ";
    cSub.display();  // Output: -2 + -2i

    // Multiply
    Complex<int> cMul = c1 * c2;
    cout << "Multiplication: ";
    cMul.display();  // Output: -5 + 10i

    return 0;
}
