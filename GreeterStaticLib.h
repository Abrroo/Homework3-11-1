#pragma once

#include<iostream>
#include <string>

class Greeter
{
public:
    std::string str;
    Greeter();
    Greeter(std::string str_);
    void greet(std::string str);
};