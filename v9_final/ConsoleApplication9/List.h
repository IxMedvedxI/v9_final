#pragma once
#include <iostream>
#include <fstream>
#include "Sortirovky.h"
using namespace std;
template <class T>


class List
{
public:
	class Node{
	public:
		T info;
		Node* next;
		Node() {
			info = NULL;
			next = NULL;
		}
		Node(T info, Node* next) :info(info), next(next) {}
		/*Node& operator=(const Node& node) {
			info = node.info;
			next = node.next;
		}*/

	};

	Node* head;
	Node* tail;
public:
	List() {
		head = tail = NULL;
	}
	void PushStart(T data) {
		Node* nd = new Node(data,head);
		if (head == NULL) {
			head = tail = nd;
		}
		head = nd;
	}

	void PushEnd(T data) {
		Node* nd = new Node(data, NULL);
		if (head == NULL) {
			head = tail = nd;
		}
		tail->next = nd;
		tail = nd;
	}



	friend ostream& operator<<(ostream& os, const List& a) {
		Node* node;
		for (node = a.head; node!= NULL; node = node->next) {
			os << node->info << ' ';
		}
		return os;
	}

};

