/**
 * Stub for a file reader.
 */

#pragma once

#include <module.hpp>
#include <string>

using std::string;

class file_reader : public module {
	public:
		void set_input_filename(string path)
		{
			_path = path;
		}
	private:
		string _path;
};

