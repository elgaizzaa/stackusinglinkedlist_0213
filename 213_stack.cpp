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
    }

};