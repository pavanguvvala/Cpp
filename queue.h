#ifndef QUEUES_H
#define QUEUES_H

#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node * next;
};

node *front=NULL;
node *rear=NULL;

void enq(int value) {
	node *newnode = (node*)malloc(sizeof(node));
	if (newnode==NULL) 
        return;
    newnode -> data=value;
    newnode -> next=NULL;
    if(rear==NULL) {
    	front=rear=newnode;
    }
    else {
	    rear -> next=newnode;
	    rear=newnode;
    }
}
void deq() {
    if(front==NULL) {
	return;
    }
	node * temp=front;
	cout << "Deleted Element is: " << front -> data << endl;
	front=front->next;
	free(temp);
	if(front==NULL) {
	    rear=NULL;
	}
}
void display() {
	node *temp=front;
	if(front==NULL) {
	    return;
	}
	cout << "Queue Elements are: " << endl;
	while(temp!=NULL)
    {
		cout << temp -> data << " ";
		temp=temp->next;
	}	
}

#endif
