/**
 * Stub for a tray.  This class should manage a container (std::map
 * like icetray, or maybe even std::vector) of pointers 
 * to module.
 */

#pragma once

#include <module.hpp>
#include <iostream>

class Tray {
public:
  // NOTE: Don't use bald pointer.  Decide which kind
  //       of smart pointer is appropriate.
  void add(Module*);
  void execute(unsigned);
  
private:
};

void Tray::execute(unsigned i=100){
	std::cout << "Start executing" << std::endl;
};

void Tray::add(Module* m){
	std::cout << "added" << std::endl;
};
