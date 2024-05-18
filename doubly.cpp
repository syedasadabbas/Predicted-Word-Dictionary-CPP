#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
	node* prev;
};

class doubly{
	node* head = NULL;
	node* t = head;
	
	public:
		void insert(int val)
		{
			node* newnode = new node;
			newnode->data = val;
			newnode->next = NULL;
			newnode->prev = NULL;
			
			if(head == NULL)
			{
				head = newnode;
				t = head;
			}
			else{
				t->next = newnode;
				newnode->prev = t;
				t = t->next;
			}
		}
		
		void display(){
			node* t = head;
			while(t != NULL){
				cout << t->data << " <-> ";
				t = t->next;
			}
			cout << "NULL";
		}
		
};

int main(){
	doubly d;
	d.insert(1);
	d.insert(2);
	d.insert(3);
	d.insert(4);
	d.insert(5);
	d.insert(6);
	d.insert(7);
	d.insert(8);
	d.insert(9);
	d.insert(10);
	d.display();
}
