#include <iostream>
using namespace std;

class Stack
{
    char arr[5];
    int top;

public:
    Stack()
    {
        top = 0;
    }

    void push(char c)
    {
        if (top < 5)
            arr[top++] = c;
    }

    char pop()
    {
        if (top > 0)
            return arr[--top];

        return '\0';
    }

    int size()
    {
        return top;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    bool isFull()
    {
        return top == 5;
    }

    void clear()
    {
        top = 0;
    }

    char peek()
    {
        if (top > 0)
            return arr[top - 1];

        return '\0';
    }
};

int main()
{
    Stack s;
    s.push('A');
    s.push('B');
    s.push('C');

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.size() << endl;
    s.pop();

    cout << "Top: " << s.peek() << endl;  
}