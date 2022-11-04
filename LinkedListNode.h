#ifndef LINKED_LIST_NODE
#define LINKED_LIST_NODE

using namespace std;
using namespace Models;


namespace LinkedListCustom {

	template<class T>
	class LinkedListNode
	{
		int id;
		T data;
		LinkedListNode<T>* next;
		LinkedListNode<T>* prev;

	public:
		LinkedListNode() { }

		LinkedListNode(T data) {
			this->data = data;
			this->next = NULL;
			this->prev = NULL;
		}

		void printData() {
			data.printData();
		}

		void append(LinkedListNode<T>* next) {
			this->next = next;
		}

		void preppend(LinkedListNode<T>* prev) {
			this->prev = prev;
		}

		LinkedListNode<T>* getNext() {
			return this->next;
		}

		LinkedListNode<T>* getPrev() {
			return this->prev;
		}

		void setId(int id) {
			this->id = id;
		}

		int getId() {
			return this->id;
		}

		T getData() {
			return this->data;
		}


	};
}
#endif