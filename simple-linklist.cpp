#include <iostream>
using namespace std;


class Node {
	public:
		int data;
		Node* next;
};

int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	
	
	head->data = 1;
	head->next = second;

	cout << head->data << " --> " << head->next << endl;

	head->data = 2;
	head->next = third;

	cout << head->data << " --> " << head->next << endl;

	head->data = 3;
	head->next = NULL;

	cout << head->data << " --> " << head->next << endl;



	return 0;
}