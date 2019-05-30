#pragma once
#include<iostream>
using namespace std;

template<typename T>
class Node {
	T el;
	Node*leftPtr;
	Node*rightPtr;

public:
	Node<T>(T el);
	void setLeftPtr(Node*ptr);
	void setRightPtr(Node*ptr);
	Node* &getLeftPtr();
	Node* &getRightPtr();
	T& getEl();

};

template<typename T>
inline Node<T>::Node(T el)
{
	this->el = el;
}

template<typename T>
inline void Node<T>::setLeftPtr(Node * ptr)
{
	leftPtr = ptr;
}

template<typename T>
inline void Node<T>::setRightPtr(Node * ptr)
{
	rightPtr = ptr;
}

template<typename T>
inline Node<T>* & Node<T>::getLeftPtr()//always twice Node<T>!!!!!!!!!!!
{
	return leftPtr;
}

template<typename T>
inline Node<T>* & Node<T>::getRightPtr()
{
	return rightPtr;
}

template<typename T>
inline T & Node<T>::getEl()
{
	return el;
}
