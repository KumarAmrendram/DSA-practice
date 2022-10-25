#include<iostream>
using namespace std;

#define N 100

class Stack{
    int* arr;   
    int top;

public:

    Stack(){
        arr = new int[N];
        top = -1;
    }  

    void push( int x){
        if (top==N-1){
            cout<<"Stack overflow";
            // return;
        }
        top++;
        arr[top]=x;
    }

    void pop(){
        if (top==-1){
            cout<<"Stack underflow";
            return;
        }
        top--;
    }

    int Top(){
        if (top == -1){
            cout<<"No element in stack"<<endl;
            return -1; 
        }
        return arr[top];
    }

    bool isEmpty(){
            return top == -1;
    }

    bool isFull(){
                    return top == N;

    }

};


int main(){
    Stack st;
    st.push(1);
   cout<<st.Top();
    st.pop();
    st.push(2);
  cout<<st.Top();



    return 0;
}