/**
 * @file source3.cpp
 * @brief This file implements functions declared in `header3.hpp`
 */
#include "header3.hpp"
#include <iostream>

void systemantics::OurClass::some_different_member_function(int param1,
                                                            int param2) {
  std::cout << param1 << " " << param2 << std::endl;
}
