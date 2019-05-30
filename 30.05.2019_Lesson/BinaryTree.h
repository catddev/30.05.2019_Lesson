#pragma once;
#include"Node.h"

template<typename T>
class Btree {
	Node<T>* root;
	int size;
	void add_helper(T el, Node<T>*& nodePtr);//PRIVATE METHOD!
public:
	Btree();
	//Btree();
	void add(T el);
	//void del();
	void print();


};

template<typename T>
inline Btree<T>::Btree()
{
	root = 0;
	size = 0;
}

template<typename T>
inline void Btree<T>::add(T el)
{
	if (root == 0) {
		root = new Node<T>(el);
		size++;
	}
	else {
		if (el < root->getEl()) {
			add_helper(el, root->getLeftPtr());
		}
		else
			add_helper(el, root->getRightPtr());
	}
}

template<typename T>
inline void Btree<T>::add_helper(T el, Node<T>*& nodePtr)
{
	if (nodePtr == 0) {//RECURSION!!!
		nodePtr = new Node<T>(el);
		size++;
	}
	if (nodePtr == 0) {
		nodePtr = new Node<T>(el);
	}
	else {
		if (el < nodePtr->getEl())
			add_helper(el, nodePtr->getLeftPtr());
		else
			add_helper(el, nodePtr->getRightPtr());
	}
}

template<typename T>
inline void Btree<T>::print()
{
	if (size != 0) {
		int count = 0;
		Node*ptr1 = root;
		Node*ptr2 = root;
		cout << root << endl;
		while (count != size) {
			cout << ptr1->getEl()<<" ";
			cout << ptr2->getEl()<<" ";
		}
	}
}
