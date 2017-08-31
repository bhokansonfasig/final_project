/**
 * Stub for a module base class.
 */
#pragma once

#include <frame.hpp>

class Module {
public:
  // doesn't have to be a reference
  // another option is to use the appropriate smart pointer
  void process(Frame&);
private:
};
