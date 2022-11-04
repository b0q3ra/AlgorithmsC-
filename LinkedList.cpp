#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include "LinkedList.h"
#include "LinkedListNode.h"

using namespace std;

namespace LinkedListC {

	template<class T>
	class LinkedList
	{
		int length = 0;
		LinkedListNode<T>* root = NULL;
		LinkedListNode<T>* last = NULL;

		LinkedList() { }

		//APPEND NODE
		LinkedListNode<T>* append(T data) {

			if (this->length == 0) {
				LinkedListNode<T>* node = new LinkedListNode<T>(data, NULL);

				node->prev = node;
				node->next = node;
				this->root = node;
				this->last = node;

				this->length++;
			}
			else {
				LinkedListNode<T>* node = new LinkedListNode<T>(data, this->last);
				this->last->next = node;
				this->last = node;
				this->root->prev = this->last;
			}

			return this->last;
		}



	};
}