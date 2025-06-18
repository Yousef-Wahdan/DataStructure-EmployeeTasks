// node.h
#pragma once

#include <iostream>
using namespace std;
class Task {
public:
    int task_id;
    string taskName;
    string taskDescription;
    string employeeName;
    void display(){
        cout << "task_id: " << task_id << " ,taskName:  " << taskName << endl;
        cout << "taskDescription: " << taskDescription << " ,employeeName:  " << employeeName << endl;
    }
};

class Node {
public:
    Task task;
    Node* next;
};
