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
		~Node() {}
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
	~List() {};
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

	bool Poisk( T data) {
		Node* node;
		for (node = head; node != NULL; node = node->next) {
			if (node->info == data) {
				return 1;
			}
		}
		return 0;
	}

	void Delet(T data) {
		Node* node = head;
		Node* prev = node;
		for (node = head; node != NULL && node->info != data; node = node->next) {
			prev = node;
		}
		if (node == head) {
			head = node->next;
			delete node;
			return;
		}
		if (node->info == data) {
			prev->next = node->next;
			delete node;
			return;

		}
	}

	void sort() {
		Node* b = head;
		Node* insert;
		
		while( b->next != NULL) {
			insert = b->next;
			if (insert->info > b->info) {
				b = b->next;
				continue;
			}
			b->next = b->next->next;
			if (insert->info < head->info)
			{
				insert->next = head;
				head = insert;
			}
			else
			{
				for (Node* h = head; h != b && h->info > insert->info; h = h->next) {
					insert->next = h->next;
					h->next = insert;
				}
			}
		}

	}

	friend ostream& operator<<(ostream& os, const List& a) {
		Node* node;
		for (node = a.head; node!= NULL; node = node->next) {
			os << node->info << ' ';
		}
		return os;
	}

};

