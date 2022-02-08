/* The dereference operator * is a unary operator.
It gives the value of the variable to which the pointer is pointing.
This process is known as dereferencing a pointer. 

the syntax:     * pointer_name;
*/

#include <iostream>
using namespace std;

int main() {
  // Declares a variable Alice
  int Alice = 5;
  // Declares a pointer variable John that can point to int value
  int *John = nullptr;
  // Stores the address of Alice in John
  John = &Alice;
  // Prints value of Alice
  cout << "Value of Alice = " << Alice << endl;
  // Prints value (address of Alice) of John 
  cout << "Value of John = " << John << endl;
  // Prints value of Alice
  cout << "Value of Alice = " << *John << endl;
  
  return 0;
}