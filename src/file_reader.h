
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

class FileReader {
 private:
  std::string adress_;
  std::fstream file_;

 public:
  FileReader(/* args */);
  ~FileReader();
};

FileReader::FileReader(/* args */) {}

FileReader::~FileReader() {}
