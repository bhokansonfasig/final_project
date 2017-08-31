#include <file_reader.hpp>
#include <file_writer.hpp>
#include <photon_propagator.hpp>
#include <tray.hpp>

using std::string;

int main(int argc, char** argv){

  // Instantiate the modules and configure them.
  file_reader* reader(new file_reader);
  photon_propagator* propagator(new photon_propagator);   
  file_writer* writer(new file_writer);

  string filename;
  reader->set_input_filename(filename);
  
  tray t;
  t.add(reader);
  t.add(propagator);
  t.add(writer);
  t.execute();  
}
 
