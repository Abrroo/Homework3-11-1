#include <iostream>
#include <string>
#include "GreeterStaticLib.h"


int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    std::string str;
    std::cout << "Введите имя: ";
    std::cin >> str;
    Greeter C;
    C.greet(str);
}