#include <iostream>
#include "Circle.h"

using namespace std;


int main() {
    Circle c(5);
    cout << "Area: " << c.area() << endl;
    cout << "Perimeter: " << c.perimeter() << endl;
}

// Compile this file along with the header implementation:
    // $ g++ main.cpp Circle.cpp