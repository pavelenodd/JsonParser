
#include <fstream>
#include <iostream>
#include <nlohmann/json.hpp>
#include <string>

using namespace std;
using json = nlohmann::json;

class FileReader {
 private:
  json json_file_;

  void LoadJson(const string& address) {
    ifstream file(address);
    if (file.is_open()) {
      file >> json_file_;
      cerr << "Settings file open!" << endl;
    } else {
      cerr << "Settings file not open!" << endl;
      throw runtime_error("Unable to open JSON file.");
    }
  }

 public:
  FileReader() = default;  // Конструктор по умолчанию
  FileReader(const string& address) { LoadJson(address); }

  template <typename T>
  T Get_Info(const string& variable_name) const {
    try {
      return json_file_.at(variable_name).get<T>();
    } catch (const json::exception& e) {
      cerr << "Error parsing JSON: " << e.what() << endl;
      throw;
    }
  }
};
