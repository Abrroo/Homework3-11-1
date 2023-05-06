#include <iostream>
#include "GreeterStaticLib.h"

Greeter::Greeter() {}
Greeter::Greeter(std::string str_)
{
    this->str = str_;
}

void Greeter::greet(std::string str)
{
    std::cout << "Hello, " << str << "!";
}