// Note: Functions which have no arguments and differ only in the return types 
// cannot be overloaded since the compiler won’t be able to differentiate between their calls.

#include <iostream>
using namespace std;

double product(double x, double y){
  return x * y;
}

// Overloading the function to handle three arguments
double product(double x, double y, double z){
  return x * y * z;
}

// Overloading the function to handle floats
float product(float x, float y){
  return x * y;
}

int main() {
  double x = 10;
  double y = 20;
  double z = 5;
  float a = 12.5;
  float b = 4.654;
  cout << product(x, y) << endl;
  cout << product(x, y, z) << endl;
  cout << product(a, b) << endl;
  // cout << product(x) << endl;
}