#if !defined(HEADER3)
#define HEADER3

/**
 * @namespace systemantics
 * @brief This namespace contains some information.
 */
namespace systemantics {
/**
 * @class OurClass
 * @brief This class represents a model in the MVC framework.
 */
class OurClass {
public:
  OurClass();

  /**
   * @brief This is some _different_ member function that accomplishes a task.
   *
   * @param param1 This parameter represents some number.
   * @param param2 This parameter should be another number.
   */
  void some_different_member_function(int param1, int param2);

private:
  /**
   * @brief This function does not do anything.
   */
  void some_private_member();
};

#endif
}
