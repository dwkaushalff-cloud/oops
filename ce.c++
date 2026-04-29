#include <iostream>
#include <stack>
using namespace std;

class Editor {
    stack<string> mainStack;
    stack<string> undoStack;

public:
    void write(string action) {
        mainStack.push(action);
        while (!undoStack.empty()) undoStack.pop(); // clear redo
        cout << "Action: " << action << endl;
    }

    void undo() {
        if (!mainStack.empty()) {
            undoStack.push(mainStack.top());
            cout << "Undo: " << mainStack.top() << endl;
            mainStack.pop();
        }
    }

    void redo() {
        if (!undoStack.empty()) {
            mainStack.push(undoStack.top());
            cout << "Redo: " << undoStack.top() << endl;
            undoStack.pop();
        }
    }
};

int main() {
    Editor e;
    e.write("Type A");
    e.write("Type B");

    e.undo();
    e.redo();

    return 0;
}
