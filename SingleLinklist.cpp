#include <iostream>
#include <string.h>
using namespace std;

class Node{
	int data;
	Node* next;
	Node(int val){
		data = val;
		next = NULL;
	}
	
	public:
		void insert(Node* &head, int val){
			
			Node* newnode = new Node(val);
			if(head == NULL){
				head = newnode;
				return;
			}
			else{
				Node* currentnode = head;
				
				while(currentnode->next != NULL){
					currentnode = currentnode->next;
				}
				
				currentnode->next = newnode;
				newnode->next = NULL;
			}
		}
		
		void insertAtMid(Node* &head, int pos, int val){
			Node* newnode = new Node(val);
			if(head==NULL){
				head = newnode;
				return;
			}
			int c = 1;
			Node* currentnode = head;
			if(pos == 1){
				newnode->next = currentnode;
				head = newnode;
				return;
			}
			while(c < pos-1){
				currentnode = currentnode->next;
				c++;
			}
			newnode->next = currentnode->next;
			currentnode->next = newnode;
		}
		insertAtHead(Node*&head, int val){
			Node* newnode = new Node(val);
			if(head == NULL){
				head = newnode;
			}
			else{
				newnode->next = head;
				head = newnode;
			}
		}
		insertAtTail(Node*&head, int val){
			Node* newnode = new Node(val);
			Node* currentnode = head;
			
			while(currentnode->next != NULL)
			{
				currentnode = currentnode->next;
			}
			newnode->next = currentnode->next;
			currentnode->next = newnode;
		}
		
		void del(Node*&head, int val){
			Node* currentnode = head;
			int c = 1;
			if(val == 1 || val == 0){
				currentnode = head->next;
				head = currentnode;
				return;
			}
			while(c < val-1){
				currentnode = currentnode->next;
				c++;
			}
			Node* t = currentnode->next;
			currentnode->next = t->next;
		}
		
		int display(Node* head){
			Node* currentnode = head;
			while(currentnode != NULL){
				cout << currentnode->data << " -> ";
				currentnode = currentnode->next;
			}
		}

};

int main(){
	Node* n;
	Node* head = NULL;
	
	n->insert(head, 22);
	n->insert(head, 23);
	n->insert(head, 24);
	n->insert(head, 25);
	n->display(head);
	cout << "\n After Inserting at Position : \n";
	n->insertAtMid(head, 1, 45);
	n->display(head);
	cout << "\n After Inserting at HEAD : \n";
	n->insertAtHead(head,99);
	n->insertAtHead(head,151);
	n->display(head);
	cout << "\n After Inserting at TAIL : \n";
	n->insertAtTail(head,53);
	n->insertAtTail(head,90);
	n->display(head);
	cout << "\n After Inserting at TAIL : \n";
	n->del(head,2);
//	n->insertAtTail(head,90);
	n->display(head);
	
}
