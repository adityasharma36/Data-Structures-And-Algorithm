#include <iostream>
#include <stack>
using namespace std;
class Stack
{
public:
    int *array;
    int topIndex;
    int size;
    Stack(int capacity)
    {
        array = new int[capacity];
        topIndex = -1;
        size = capacity;
    }
    void push(int value)
    {
        if (topIndex == size - 1)
        {
            cout << "stack is overflow " << endl;
        }
        else
        {
            topIndex++;
            array[topIndex] = value;
        }
    }
    void pop()
    {
        if (topIndex == -1)
        {
            cout << "stack is underflow " << endl;
        }
        else
        {
            array[topIndex] = 0;
            topIndex--;
        }
    }
    int getLength()
    {
        return topIndex + 1;
    }
    bool isEmpty()
    {
        if (topIndex == -1)
            return true;
        else
            return false;
    }
    int top()
    {
        return array[topIndex];
    }
    void print()
    {
        cout << "printing stack " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(5);
    s.print();
    s.push(5);
    s.print();
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    s.print();
    s.pop();
    s.pop();
    cout << s.getLength()<<endl;
    cout << s.isEmpty()<<endl;
    cout << s.top()<<endl;  
    s.print();
    // stack<int> s;
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // cout<<"size of stack is "<<s.size()<<endl;
    // cout<<"is stack is empty "<<s.empty()<<endl;
    // cout<<"print top element "<<s.top()<<endl;
    // cout<<"removal of top element "<<endl;
    // s.pop();
    // cout<<"print top elment "<<s.top()<<endl;
    // return 0;
}