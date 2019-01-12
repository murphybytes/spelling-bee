#include "boost/program_options.hpp"
#include "matcher.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


namespace po = boost::program_options; 

int main(int argc, char* argv[] ) {
  po::options_description desc("Allowed options");
  desc.add_options()
    ("help", "show help message")
    ("dictionary,d", po::value<std::string>(), "file containing dictionary")
    ("required,r", po::value<std::string>(), "required letter")
    ("optionals,o", po::value<std::string>(), "optional letters" )
    ;
  po::variables_map vm;
  po::store(po::parse_command_line(argc, argv, desc ), vm);
  po::notify(vm);
  if ( vm.count("help") ) {
    std::cout << desc << std::endl;
    return 0;
  }

  matcher m(vm["required"].as<std::string>(),  vm["optionals"].as<std::string>());

  std::string candidate;;
  std::ifstream dict_file(vm["dictionary"].as<std::string>());
  
  while(std::getline(dict_file, candidate)) {
    if(m.match(candidate)){
      std::cout << candidate << std::endl; 
    }
  }
  return 0; 
}
