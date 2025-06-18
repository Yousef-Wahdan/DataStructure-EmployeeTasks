// taskManager.h
#pragma once

#include "stack.h"

class TaskManager {
private:
    Stack history;
    Stack redoStack;

public:
    void undo();
    void redo();
    
    void addTask(int task_id,  string taskName,  string taskDescription,  string employeeName);
    void display();
};
