#ifndef STRUCTURES_HEADER_BINARY_SEARCH
#define STRUCTURES_HEADER_BINARY_SEARCH

using namespace std;
namespace BinarySearch {
	//BINARY SEARCH

	class node {
		public:
			int id;

			string word;
			string definition;

			node* parent = NULL;
			node* leftChild = NULL;
			node* rightChild = NULL;

			node(string word, string definition, node* parent);
	};

	class tree {
		public:
			node* root;
			node* append(string word, string definition, node* parent, bool left);
	};



	

}
#endif
#pragma once
