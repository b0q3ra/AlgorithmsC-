#ifndef LINKED_LIST_LIST
#define LINKED_LIST_LIST

using namespace std;
using namespace Models;

namespace LinkedListCustom {

	template<class T>
	class LinkedList
	{
		int currentId = 0;
		int length = 0;
		LinkedListNode<T>* root;
		LinkedListNode<T>* last;
		LinkedListNode<T>* current = NULL;
	public:
		LinkedList() { }

		//APPEND NEW NODE
		LinkedListNode<T>* append(T data) {

			LinkedListNode<T>* node = new LinkedListNode<T>(data);
			node->setId(this->currentId);
			this->currentId++;
			
			if (length == 0) {
				this->root = node;
				this->last = node;
				node->append(node);
				node->preppend(node);
				
				length++;
			}
			else {
				this->last->append(node);
				node->preppend(this->last);
				node->append(this->root);
				this->root->preppend(node);
				this->last = node;
				length++;
			}
			
			return node;
		}

		LinkedListNode<T>* getRoot(){
			return this->root;
		}

		LinkedListNode<T>* getLast() {
			return this->last;
		}

		LinkedListNode<T>* find(int id) {

			LinkedListNode<T>* temp = this->root;

			for(int i = 0; i < length; i++){

				if (temp->getData().id == id) {
					return temp;
				}
				temp = temp->getNext();
			}

			return NULL;
		}

		void remove(int id) {
			LinkedListNode<T>* node = this->find(id);

			if (node != NULL) {
				LinkedListNode<T>* prev = node->getPrev();
				LinkedListNode<T>* next = node->getNext();
				
				prev->append(next);
				next->preppend(prev);

				if (node->getId() == this->last->getId()) {
					this->last = prev;
				}
				if (node->getId() == this->root->getId()) {
					this->root = next;
				}

				free(node);

				this->length--;
				
			}
		}
		
		void printAll() {
			LinkedListNode<T>* temp = this->root;

			for (int i = 0; i < length; i++) {
				temp->printData();
				temp = temp->getNext();
			}

		}

		int getLength() {
			return this->length;
		}

		LinkedListNode<T> getNext() {
			if (this->current == NULL) {
				this->current = this->root;
			}
			else {
				this->current = this->current->getNext();
				
			}
			return *this->current;
		}
	};
}
#endif