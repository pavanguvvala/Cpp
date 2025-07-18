#ifndef STACKS_H
#define STACKS_H

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node * next;
};

node * top = nullptr;

void push(int value)
{
    node * newnode = (node*)malloc(sizeof(node));
    if (newnode == NULL)
        return;
    newnode -> data = value;
    newnode -> next = top;
    top = newnode;
}



void display()
{
    node * temp;
    if (top==NULL)
    	return;
    else 
    {
        temp = top;
        cout << "Stack elements : " ;
        while(temp != NULL) 
        {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
}


void pop() 
{
    node * temp;
    if (top==NULL)
		return;
    else
    {
        temp = top;
        cout << "Popped out element is : " << temp->data << endl;
        top = top -> next;
        free(temp);
    }
}

#endif
