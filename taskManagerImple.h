//taskManager.cpp
#pragma once
#include "taskManager.h"
#include <iostream>

using namespace std;

void TaskManager::undo() {
    if (history.isEmpty()) {
        cout << "Nothing to undo" << endl;
        return;
    }

    Task lastTask = history.peek();
    redoStack.push(lastTask.task_id, lastTask.taskName, lastTask.taskDescription, lastTask.employeeName);
    history.pop();
    cout << "Undo done." << endl;
}

void TaskManager::redo() {
    if (redoStack.isEmpty()) {
        cout << "Nothing to redo.\n";
        return;
    }

    Task lastTask = redoStack.peek();
    history.push(lastTask.task_id, lastTask.taskName, lastTask.taskDescription, lastTask.employeeName);
    redoStack.pop();
    cout << "Redo done." << endl;
}

void TaskManager::addTask(int task_id,  string taskName,  string taskDescription,  string employeeName) {
    history.push(task_id, taskName, taskDescription, employeeName);
    while (!redoStack.isEmpty())
        redoStack.pop();
    cout << "add done." << endl;
}

void TaskManager::display() {
    cout << "~~~ Task History ~~~" << endl;
    history.display();
}