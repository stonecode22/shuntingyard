#include"shunt.h"

stack::stack() //constructor
{
  top = NULL;
}

stack::~stack() //deconstructor
{
  deleteAll();
}

int stack::deleteAll()
{
  return deleteAll(top);
}

int stack::deleteAll(node* &top)
{
  if(top != NULL)
    {
      deleteAll(top->next);
      delete top;
      top = NULL;
      return 1;
    }
}

int stack::push(int token)
{
  return push(top, token);
}

int stack::push(node*& top, int token)
{
  if(top == NULL)
    {
      node* newNode = new node;
      newNode->data = token;
      newNode->next = NULL;
      top = newNode;
    }
  else
    {
      node* newNode = new node;
      newNode->data = token;
      newNode->next = top;
      top = newNode;
    }
  return 1;
} 

int stack::pop()
{
  if(top == NULL)
    {
      cout << "Nothing in the stack.\n";
      return 0;
    }
  else
    {
      node* temp;
      temp = top;
      top = top->next;
      delete temp;
      return 1;
    }
}

int stack::display()
{
  if(top == NULL)
    {
      cout << "Nothing in the stack.\n";
      return 0;
    }
  else
    {
      node* temp;
      temp = top;
      while(temp != NULL)
	{
	  cout << temp->data << endl;
	  temp = temp->next;
	}
      return 1;
    }
}
