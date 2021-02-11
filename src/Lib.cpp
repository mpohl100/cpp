#include "Lib.h"

#include <range/v3/all.hpp>

#include <iostream>

namespace lib{

void say_hello(std::string const& name)
{
    auto sorted = name | ranges::actions::sort;
    std::cout << "Hello, " << sorted << "!" << '\n';
}

}