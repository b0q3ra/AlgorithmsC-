#ifndef FILE_READER
#define FILE_READER

using namespace std;
namespace Files {

	class FileReader
	{
	public:
		ifstream input;

		FileReader(string path);
		void countWords();
		void printFile();
		~FileReader();
	};

}
#endif