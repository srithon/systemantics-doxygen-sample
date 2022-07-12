/**
 * @file header1.hpp
 * @brief This file declares prototypes for some functions.
 */
#if !defined(HEADER1)
#define HEADER1

#include <string>

/**
 * @brief This is a void function that accomplishes some task.
 *
 * @param param1 This is the first parameter of the function; it represents an
 * age.
 * @param param2 This is the second parameter of the function; it should point
 * to another age.
 */
void some_void_function(int param1, int *param2);

/**
 * @brief Yields the length of a string subtracted by an integer
 *
 * @param some_string This string represents someone's name.
 * @param some_integer This integer represents someone's age.
 * @return The length of `some_string` subtracted by `some_integer`
 */
int some_int_function(std::string some_string, int some_integer);

#endif
