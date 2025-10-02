#include <iostream>
using namespace std;
class Stack
{
    int capacity;
    int *arr;
    int top;

public:
    Stack(int size)
    {
        this->capacity = size;
        arr = new int[capacity];
        this->top = -1;
    }
    void push(int data)
    {
        if (this->top == capacity - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        else
        {
            this->top++;
            this->arr[this->top] = data;
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            top--;
        }
    }
    void get_top()
    {
        if (this->top == -1)
        {
            cout << "Underflow" << endl;
            return ;
        }
        else
        {
            cout<< this->arr[this->top];
        }
    }
    bool empty()
    {
        return top == -1;
    }
    int size()
    {
        return top + 1;
    }
    bool is_ful()
    {
        return this->top == this->capacity;
    }
};
int main()
{
    Stack st(5);
    st.get_top();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.get_top();


    return 0;
}