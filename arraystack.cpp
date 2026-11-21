#include <iostream>
using namespace std;

class Stack {
    int arr[100];
    int Top;

public:
    Stack() {
        Top = -1;
    }

    void push(int x) {
        Top++;
        arr[Top] = x;
    }

    void pop() {
        if (Top != -1) {
            Top--;
        }
    }

    int top() {
        return arr[Top];
    }

    int size() {
        return Top + 1;
    }

    bool empty() {
        return Top == -1;
    }
};

int main() {
    Stack s1;

   
    cout << s1.size() << endl;
    cout << s1.top() << endl;
cout << s1.empty() << endl;
    return 0;
}