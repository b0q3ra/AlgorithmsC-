#include <iostream>
#include <stdlib.h>
#include "BinarySearch.h"

using namespace std;
namespace BinarySearch {

	//NODE DEFINITION
	node::node(string word, string definition, node* parent) {
		this->word = word;
		this->definition = definition;
		this->parent = parent;
	}

	node* tree::append(string word, string definition, node* parent, bool left) {

		node* child = new node(word, definition, parent);
		
		switch (left) {
			case true:
				parent->leftChild = child;
				break;
			case false:
				parent->rightChild = child;
				break;
		}

		return child;
	}




}