/**
 * Stub for a frame class.  This should manage a std::map<std::string, frame_object_ptr>
 */
#pragma once

#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <vector>


class FrameObject {
  protected:
    std::string pretty_name_ = "Default Frame Object";

  public:
    const std::string get_pretty_name() const { return pretty_name_; }
};

std::ostream& operator<<(std::ostream& os, const FrameObject& fo);


class Frame {
  private:
    std::map<std::string, std::shared_ptr<FrameObject> > object_map_;

  public:
    // Constructor
    Frame() = default;
    // Destructor
    ~Frame() = default;
    // Copy Constructor
    Frame(const Frame&) = default;
    // Move Constructor
    Frame(Frame&&) = default;
    // Copy Assignment
    Frame& operator=(const Frame&) = default;
    // Move Assignment
    Frame& operator=(Frame&&) = default;

    void add(const std::string& key, std::shared_ptr<FrameObject> object_ptr)
    {
      std::cout << "Adding " << key << "...";
      if (object_map_[key]==nullptr) {object_map_[key] = object_ptr;}
      else {std::cout << " FAILED";} // Raise an error here?
      std::cout << std::endl;
    }

    std::shared_ptr<FrameObject> get(const std::string& key) const
    {
      auto iter = object_map_.find(key);
      if (iter!=object_map_.end()) { return iter->second; }
      else { return nullptr; }
    }

    void remove(const std::string& key)
    { std::cout << "Removing " << key << std::endl; object_map_[key] = nullptr; }

    const std::vector<std::string> keys() const
    {
      std::vector<std::string> keys;
      for (auto const& map_pair : object_map_)
      {
        if (map_pair.second!=nullptr) { keys.push_back(map_pair.first); }
      }
      return keys;
    }

};

std::ostream& operator<<(std::ostream& os, const Frame& f);
