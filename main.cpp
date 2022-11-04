#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "UserModel.h"
#include "LinkedListNode.h"
#include "LinkedList.h"
#include "DictionaryEntry.h"
#include "Dictionary.h"


using namespace std;
using namespace Models;
using namespace LinkedListCustom;
using namespace DictionaryCustom;

int main() {

	UserModel usr0 = UserModel("root", "root@mail.com", "robmec");
	UserModel usr1 = UserModel("sergi", "s@mail.com", "robmec");
	UserModel usr2 = UserModel("maria", "m@mail.com", "robmec");
	UserModel usr3 = UserModel("cristina", "c@mail.com", "robmec");
	UserModel usr4 = UserModel("oriol", "o@mail.com", "robmec");
	UserModel usr5 = UserModel("martina", "ma@mail.com", "robmec");

	LinkedList<UserModel> lst = LinkedList<UserModel>();
	lst.append(usr0);
	lst.append(usr1);
	lst.append(usr2);
	lst.append(usr3);
	lst.append(usr4);
	lst.append(usr5);

	//DICTIONARY_ENTRY
	
	DictionaryEntry<string, UserModel> dct01 = DictionaryEntry<string, UserModel>("sergi", usr1);
	string name = dct01.getKey();
	UserModel user = dct01.getValue();


	//DICTIONARY
	Dictionary<string,UserModel> dictionary = Dictionary<string,UserModel>();
	dictionary.add("user0", usr0);
	dictionary.add("user1", usr1);
	dictionary.add("user2", usr2);
	dictionary.add("user3", usr3);
	dictionary
		.find("user1")
		.printData();

	
	
	return 0;
}

