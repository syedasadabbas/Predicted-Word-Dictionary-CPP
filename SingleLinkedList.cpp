#include <iostream>
using namespace std;

class Node{
	public:
	string data;
	Node* next;
	
	Node(string value){
		data = value;
		next = NULL;
	}
	void insertAtTail(Node* &head, string value){
	
	Node* newnode = new Node(value);
	
	if(head == NULL){
		head = newnode;
		return;
	}
	
	Node* currentnode = head;
	
	// Reading Linked lIST
	while(currentnode->next != NULL){
		currentnode = currentnode->next;
	}
	
	currentnode->next = newnode;
}

void display(Node* head){
	Node* currentnode = head;
	while(currentnode != NULL){
		cout << currentnode->data << " -> ";
		currentnode = currentnode->next;
	}


void insertAtHead(Node* &head, string value){
	Node* newnode = new Node(value);
	newnode->next = head;
	
	head = newnode;
}
};



int main(){
	
	Node* head = NULL;
	Node *N;
	
	N->insertAtTail(head, "Ali");
	N->insertAtTail(head, "Babar");
	N->insertAtTail(head, "Azam");
	N->insertAtTail(head, "Pakistan");
	N->insertAtHead(head, "Zoom");
	N->insertAtTail(head, "Canada");
	N->display(head);
	
}
