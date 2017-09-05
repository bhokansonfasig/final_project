#include <file_reader.hpp>
#include <file_writer.hpp>
#include <photon_propagator.hpp>
#include <tray.hpp>

using std::string;

int main(int argc, char** argv){

  // Instantiate the modules and configure them.
  FileReader* reader(new FileReader);
  PhotonPropagator* propagator(new PhotonPropagator);
  FileWriter* writer(new FileWriter);

  string filename;
  reader->set_input_filename(filename);
  
  Tray t;
  t.add(reader);
  t.add(propagator);
  t.add(writer);
  t.execute();
}
 
