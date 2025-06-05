#include<iostream>
using namespace std;

class Node
{
     public:
        int data;
        Node *next;

        Node()
        {
            next = NULL;
        }
};

class Stack
{
    private:
        Node *top;

    public:
     Stack()
    {
        top = NULL; 
    }

    int push(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = top; 
        top = newNode;   
        cout << "Push Value" << value << endl;
        return value;
    }

    bool isEmpty()
    {
     return top == NULL;
    }

    void pop()
    {
         Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
            return; 
        }
        cout << "Popped value: " << temp->data << endl;
        top = temp->next;
        temp = nullptr;
    }

     void peek()
        {
            if (isEmpty())
            {
                cout << 'List is empty.' << endl;
                return; 
            }
        }
};

