#include <iostream>
using namespace std;

class Node{
	int data;
	Node* link;
public:
	Node(){
		this->data = 0;
		this->link = NULL;
	}
	Node(int val){
		this->data = val;
		this->link = NULL;
	}
	int getData(){
		return data;
	}
	friend class LinkedList;
};

class LinkedList{
	Node* head;
public:
	LinkedList(){
		head = NULL;
	}
	void createNode(int val);
	void printNode();
	void insertInBetween(int val);
};

void LinkedList::createNode(int val){
	Node* newNode = new Node(val);
	if(head==NULL){
		head = newNode;
		return;
	}
	Node* temp = head;
	while(temp->link!=NULL){
		temp = temp->link;
	}
	temp->link = newNode;
}

void LinkedList::printNode(){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->link;
	}
}

void LinkedList::insertInBetween(int val){
	Node* temp = head;
	if(val<head->getData()){
//		cout<<"before head"<<endl;
		Node* newNode = new Node(val);
		newNode->link = head;
		head = newNode;
		return;
	}
	while(temp->link!=NULL){
		Node* succ = temp->link;
		if(val>temp->getData() and val<succ->getData()){
//			cout<<"Yes between "<<temp->data<<" & "<<succ->data<<endl;
			Node* newNode = new Node(val);
			newNode->link = succ;
			temp->link = newNode;
			return;
		}
		temp = temp->link;
	}
	if(val>temp->getData()){
		Node* newNode = new Node(val);
		temp->link = newNode;
	}
}

int main() {
	LinkedList list;
	int mainOption,loopOption=1;
	while (loopOption==1){
		cout<<"1.Add Node\n2.Print Node\n3.Insert New Node"<<endl;
		cin>>mainOption;
		switch (mainOption) {
			case 1:
				int val;
				cout<<"Enter the value"<<endl;
				cin>>val;
				list.createNode(val);
				break;
			case 2:
				list.printNode();
				break;
			case 3:
				cout<<"Enter the value"<<endl;
				cin>>val;
				list.insertInBetween(val);
				break;
			default:
				cout<<"Invalid Statement"<<endl;
				break;
		}
		cout<<"Do you want to continue\n1.Continue\n2.Quit"<<endl;
		cin>>loopOption;
	}
	cout<<"Succesfully Exited!"<<endl;
	return 0;
}
