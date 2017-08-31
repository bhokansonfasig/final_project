/**
 * Stub for a module base class.
 */
#pragma once

#include <frame.hpp>

class  module {
public:
  // doesn't have to be a reference
  // another option is to use the appropriate smart pointer
  void process(frame&);
private:
};
