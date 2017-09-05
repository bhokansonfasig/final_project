#include "frame.hpp"


std::ostream& operator<<(std::ostream& os, const FrameObject& fo)
{
  return os << fo.get_pretty_name();
}




void Frame::add(const std::string& key, std::shared_ptr<FrameObject> object_ptr)
{
  if (object_map_[key]==nullptr) {object_map_[key] = object_ptr;}
  else {} // Raise an error here?
}

std::shared_ptr<FrameObject> Frame::get(const std::string& key) const
{
  auto iter = object_map_.find(key);
  if (iter!=object_map_.end()) { return iter->second; }
  else { return nullptr; }
}

void Frame::remove(const std::string& key)
{
  object_map_[key] = nullptr;
}

const std::vector<std::string> Frame::keys() const
{
  std::vector<std::string> keys;
  for (auto const& map_pair : object_map_)
  {
    if (map_pair.second!=nullptr) { keys.push_back(map_pair.first); }
  }
  return keys;
}

const bool Frame::empty() const
{
  for (auto const& map_pair : object_map_)
  {
    if (map_pair.second!=nullptr) {return false;}
  }
  return true;
}


std::ostream& operator<<(std::ostream& os, const Frame& f)
{
  os << "Frame:";
  if (f.empty())
  {
    return os << "\n\tFrame is empty";
  }
  for (const std::string& key : f.keys())
  {
    auto obj = f.get(key);
    os << "\n\t" << key << ":\t" << *obj << " (" << obj << ")";
  }
  return os;
}
