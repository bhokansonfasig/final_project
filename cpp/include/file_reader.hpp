/**
 * Stub for a file reader.
 */

#pragma once

#include <module.hpp>
#include <string>

using std::string;

class FileReader : public Module {
	public:
		void set_input_filename(string path)
		{
			path_ = path;
		}
	private:
		string path_;
};

