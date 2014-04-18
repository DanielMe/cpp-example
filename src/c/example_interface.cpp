#include "example_interface.h"
#include <iostream>

class FooBar {
public:
  FooBar(){
  }

  virtual ~FooBar(){
  }

  void runFoo(){
    std::cout << "Hello from C++" << std::endl;
  }
};


void c_test()
{
  FooBar foo;
  foo.runFoo();
}
