#include <iostream>
using namespace std;

class Node 
{
public :
	int data;
	Node* next;
    Node()
	{
		next = NULL;
	}
};

class stack
{
private :
Node* top;
public:
 stack()
    {
top = NULL;
  }
  
   int push(int value)
    {
     Node* newNode = new Node(); //1. allocate memory for the new node
      newNode->data = value; //2. assign value
      newNode->next = top; //3. step the next pointer of the new node to the current top node
      top = newNode; //4. update the top pointer to the new node

      cout << "Push value: " << value << endl;
      return value;
    }

    // pop operation: remove the topmost element from the stack:

    void pop(){
if (isEmpty()) //step 1
		{
			cout << "Stack is empty."; //step 1a if (isEmpty()) { //step 1
			
		}
        cout << "Popped value: " <<top->data << endl; //step2
        top = top->next; //step 3: update the top pointer to the next node
    }
    void peek(){
if (top == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            Node* current = top;
            while (current != NULL) {
                cout << current->data << " " << endl;
                current = current->next;
            }
            cout << endl;
    }
    

    }
     bool isEmpty() {
        return top == NULL; //return true if the top pointer is NULL, indicationg an empty stack
     }

};

int main() {
    stack stack;

    int choice = 0;
    int value;

    while (choice != 5) {
            cout << "1. Push\n";
            cout << "2. Pop\n"; 
            cout << "3. Peek\n";
            cout << "4. Exit\n";
            cout << "enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Enter the value to push: ";
                    cin >> value;
                    stack.push(value); //push the entered value onto the stack
                    break;
                case 2:
                    if (!stack.isEmpty()) {
                        stack.pop(); //pop the top element from the stack
                    }
                    else {
                        cout << "Stack is empty. Cannot pop." << endl;
                    }
                    break;
                case 3:
                    if (!stack.isEmpty()) {
                        stack.peek(); //get the value of the top element
                    }
                    else {
                        cout << "Stack is empty. No top value." << endl;
                    }
                    break;
                case 4:
                    cout << "Exciting program." << endl;
                    break;
                default:
                    cout << "Invalid choice. Try again." << endl;
                    break;
            }
            cout <<endl;
    }
    return 0;
}