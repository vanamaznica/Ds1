#include <iostream>
using namespace std;
class Stack
{
    char* arr;
    int top;
    int size;

public:
    Stack()
    {
        size = 2;
        top = 0;
        arr = new char[size];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(char c)
    {
        if (top == size)
        {
            size = size * 2;

            char* temp = new char[size];

            for (int i = 0; i < top; i++)
                temp[i] = arr[i];

            delete[] arr;
            arr = temp;
        }

        arr[top++] = c;
    }

    char pop()
    {
        if (top > 0)
            return arr[--top];

        return '\0';
    }

    int count()
    {
        return top;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    bool isFull()
    {
        return top == size;
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
    s.push('D');
    s.push('E');

    cout << "Top: " << s.peek() << endl;
    cout << "Size: " << s.count() << endl;
}