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
    }

};