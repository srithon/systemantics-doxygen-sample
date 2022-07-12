/**
 * @file source1.cpp
 * @brief This file implements functions declared in `header1.hpp`
 */
#include "header1.hpp"
#include <iostream>

void some_void_function(int param1, int *param2) {
  std::cout << param1 << *param2 << std::endl;
}

int some_int_function(std::string some_string, int some_integer) {
  return some_string.length() - some_integer;
}

/// This is some documentation for the function.
void something_else() {}
