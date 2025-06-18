#include <iostream>
#include <string>
#include "taskManager.h"      
#include "taskManagerImple.h" 
using namespace std;

int main() {
    TaskManager obj;
    int choice;

    while (true) {
        cout << "\n===== Task Manager Menu =====" << endl;
        cout << "1. Add New Task" << endl;
        cout << "2. Display All Tasks" << endl;
        cout << "3. Undo" << endl;
        cout << "4. Redo" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); 

        if (choice == 1) {
            int id;
            string name, description, employee;

            cout << "Enter task ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter task name: ";
            getline(cin, name);

            cout << "Enter task description: ";
            getline(cin, description);

            cout << "Enter employee name: ";
            getline(cin, employee);

            obj.addTask(id, name, description, employee);
            cout << " Task added successfully.\n";

        }
        else if (choice == 2) {
            obj.display();

        }
        else if (choice == 3) {
            obj.undo();

        }
        else if (choice == 4) {
            obj.redo();

        }
        else if (choice == 5) {
            cout << " Exiting the program." << endl;
            break;

        }
        else {
            cout << " Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
