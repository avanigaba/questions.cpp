#include <iostream>
using namespace std;

class stack {
    int arr[100];
    int Top;

public:
    stack() {
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
    stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << s1.size() << endl;
    cout << s1.top() << endl;

    s1.pop();

    cout << s1.size() << endl;
    cout << s1.top() << endl;

    return 0;
}