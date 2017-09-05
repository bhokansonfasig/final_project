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

    void add(const std::string& key, std::shared_ptr<FrameObject> object_ptr);

    std::shared_ptr<FrameObject> get(const std::string& key) const;

    void remove(const std::string& key);

    const std::vector<std::string> keys() const;

    const bool empty() const;

};

std::ostream& operator<<(std::ostream& os, const Frame& f);
