#include<iostream>
#include"stack.h"
using namespace std;

Stack::Stack()
{
  top = -1;
}

bool Stack::push(char x)
{
  if(top >= 30)
    {
      cout << "Error.";
      return false;
    }
  else
    {
      token[++top] = x;
      return true;
    }
}

bool Stack::checkEmpty()
{
  return (top < 0);
}

char Stack::pop()
{
  if(top < 0)
    {
      cout << "Error.";
      return 0;
    }
  else
    {
      char x = token[top--];
      return x;
    }
}
