#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include "LinkedListNode.h"


using namespace std;
using namespace LinkedListCustom;


template<class T>
LinkedListNode<T>::LinkedListNode(T data) {
	this->data = data;
}

template<class T>
LinkedListNode<T>::LinkedListNode() {
	cout << "it works" << endl;
}





