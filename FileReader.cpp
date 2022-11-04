#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;
namespace Files {

	class FileReader
	{
		ifstream input;
		FileReader(string path) {
			input.open(path);
		}

		void printFile() {
			string line;
			if (input.is_open()) {
				while (getline(this->input, line)) {
					cout << line << endl;
				}
			}
		}

		~FileReader() {
			this->input.close();
		}
		
	};

}