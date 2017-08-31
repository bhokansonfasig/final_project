/**
 * Stub for a module base class.
 */
#ifndef MODULE_H_INCLUDED
#define MODULE_H_INCLUDED

#include <frame.hpp>

class  module {
public:
  // doesn't have to be a reference
  // another option is to use the appropriate smart pointer
  void process(frame&);
private:
};

#endif
