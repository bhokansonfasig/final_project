#include "frame.hpp"


std::ostream& operator<<(std::ostream& os, const FrameObject& fo)
{
  return os << fo.get_pretty_name();
}


std::ostream& operator<<(std::ostream& os, const Frame& f)
{
  os << "Frame:";
  for (const std::string& key : f.keys())
  {
    auto obj = f.get(key);
    os << "\n\t" << key << ":\t" << *obj << " (" << obj << ")";
  }
  return os;
}
