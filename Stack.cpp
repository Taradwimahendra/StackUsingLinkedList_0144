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
        else{
                Node *current = top;
                while (current != NULL)
                {
                    cout << current->data << " " << endl;
                    current = current->next;
                 }
                 cout << endl;
            } 
        }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice != 4)
    {
       cout << "1. Push\n";
       cout << "2. Pop\n";
       cout << "3. Peek\n";
       cout << "4. Exit\n";
       cout << "Enter your choice: ";
       cin >> choice;

       switch (choice)
       {
       case 1:
        cout << "Enter the value to push: ";
        cin >> value;
        stack.push(value); 
       case 2:
        stack.pop(); 
        break;
       case 3:
        stack.peek(); 
        break;
       case 4:
        cout << "Exiting Program." << endl;
        break;
       default:
        cout << "Invalid choice. Try again." << endl;
        break;
       }

       cout << endl;
    }

    return 0;
    
}
