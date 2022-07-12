#if !defined(HEADER2)
#define HEADER2

/**
 * @class MyClass
 * @brief This class represents a model in the MVC framework.
 */
class MyClass {
public:
  MyClass();

  /**
   * @brief This is some member function that accomplishes a task.
   *
   * @param param1 This parameter represents some number.
   * @param param2 This parameter should be another number.
   */
  void some_member_function(int param1, int param2);

private:
  /**
   * @brief This function does not do anything.
   */
  void some_private_member();
};

#endif
