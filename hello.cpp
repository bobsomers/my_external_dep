#include "hello.h"

#include <iostream>

void sayHelloImpl(const std::string& name) __attribute__((deprecated));

void sayHelloImpl(const std::string& name) {
  std::cout << "Hello, " << name << std::endl;
}

void sayHello(const std::string& name) {
  sayHelloImpl(name);
}
