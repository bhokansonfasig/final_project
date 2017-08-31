/**
 * Stub for a tray.  This class should manage a container (std::map
 * like icetray, or maybe even std::vector) of pointers 
 * to module.
 */
#include <module.hpp>

class tray {
public:
  // NOTE: Don't use bald pointer.  Decide which kind
  //       of smart pointer is appropriate.
  void add(module*);
  void execute(unsigned);
  
private:
};
