#include <iostream>
using namespace std;

#define N 100

class Stack
{
    int *arr;
    char top;

public:
    Stack()
    {
        arr = new int[N];
        top = -1;
    }

    void push(int x)
    {
        if (top == N - 1)
        {
            cout << "Stack overflow";
            return;
        }
        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow";
            return;
        }
        top--;
    }

    char Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == N;
    }
};

void reverseString(string &str)
{

    char chr;
    Stack st;
    for (int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }

    for (int i = 0; i < str.length(); i++)
    {
       str[i]=char(st.Top());
        st.pop();
    }
}

int main(){
    string str = "hello";
    reverseString(str);
    cout<<str;
    return 0;
}