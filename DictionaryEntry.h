#ifndef DICTIONARY_DICTIONARY_ENTRY
#define DICTIONARY_DICTIONARY_ENTRY

using namespace std;
using namespace Models;

namespace DictionaryCustom {
	/*THE T CLASS MUST CONTAIN A "T::printData" FUNCTION FROM WICH THE "DictionaryEntry::printData"
		FUNCTION WILL USE TO PRINT THE DICTIONARY ENTRY DATA
	*/


	template<class K, class T>
	class DictionaryEntry {
		int id;
		K key;
		T value;

	public:
		DictionaryEntry() { }

		DictionaryEntry(K key, T value) {
			this->key = key;
			this->value = value;
		}

		K getKey() {
			return this->key;
		}

		T getValue() {
			return this->value;
		}

		void printData() {
			cout << "Key: " << this->key << endl;
			value.printData();
		}

		void setId(int id) {
			this->id = id;
		}

		int getId() {
			return this->id;
		}

	};
}

#endif
