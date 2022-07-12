/**
 * @file source2.cpp
 * @brief This file implements functions declared in `header2.hpp`
 */
#include "header2.hpp"
#include <iostream>

void MyClass::some_member_function(int param1, int param2) {
  std::cout << param1 << " " << param2 << std::endl;
}
