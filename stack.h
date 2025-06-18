// stack.h
#pragma once

#include "node.h"
class Stack {
private:
    Node* top;
		public:
    Stack() {
        top = NULL;
    }
		
    bool isEmpty() {
            return top == NULL;
    }
		
    void push(int ID, string TN = "", string TD = "", string EN = "") {
        Node* newnode = new Node();
        newnode->task.task_id = ID;
        newnode->task.taskName = TN;
        newnode->task.taskDescription = TD;
        newnode->task.employeeName = EN;
        
        newnode->next = isEmpty()? NULL: top;
    		top = newnode;
    }
    
    void pop() {
        Node* delptr = top;
        top = top->next;
        delete delptr;
    }
		
    Task peek() {
    		if (top == NULL) return *(new Task());
        return top->task;
    }
		
		void display(){
				Node* temp = top;
				while(temp != NULL)
				{
						temp->task.display();
						temp = temp->next;
				}
		}
};
