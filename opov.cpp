
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A(int);
    A operator++();
    A operator++(int);
    A operator--();
    A operator--(int);
    void display();
};

A::A(int x) : a(x) {}

A A::operator++()
{
    return A(++a);
}

A A::operator++(int)
{
    return A(a++);
}

A A::operator--()
{
    return A(--a);
}

A A::operator--(int)
{
    return A(a--);
}

void A::display()
{
    cout << "a = " << a << endl;
}
int main()
{
    A a(10);
    A b = ++a;
    a.display();
    b.display();
    b = a++;
    a.display();
    b.display();
    b = --a;
    a.display();
    b.display();
    b = a--;
    a.display();
    b.display();
    return 0;
}
