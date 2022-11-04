#ifndef DICTIONARY_DICTIONARY
#define DICTIONARY_DICTIONARY

#include "LinkedList.h"
#include "DictionaryEntry.h"

using namespace std;
using namespace LinkedListCustom;
using namespace Models;

//T Class must always contain a printData() fucntion that displays the data from the 
namespace DictionaryCustom {

	template<class K, class T>
	class Dictionary {
		//allow only strings or numbers as Key
		static_assert( std::is_arithmetic<K>::value || std::is_same<K, std::string>::value, "Key must be a string or a number" );

		//VARIABLES
		K key;
		T value;
		LinkedList<DictionaryEntry<K, T>> dictionary;
	public:
		
		Dictionary() { }

		DictionaryEntry<K, T> add(K key, T value) {
			DictionaryEntry<K, T> entry = DictionaryEntry<K, T>(key, value);
			dictionary.append(entry);
			return entry;
		}

		DictionaryEntry<K, T> find(K key) {
			DictionaryEntry<K, T> currentEntry;
			for (int i = 0; i < this->dictionary.getLength(); i++) {
				LinkedListNode<DictionaryEntry<K, T>> currentNode = this->dictionary.getNext();
				currentEntry = currentNode.getData();
				if (currentEntry.getKey() == key) {
					return currentEntry;
				}
			}

			return currentEntry;
			
		}

		




	};
}

#endif

