#include<iostream>
#include<cstring>
#include"stack.h"
using namespace std;

int main()
{
  int i, tokenAmount;
  char getToken;
  struct Stack s;
  cout << "How many tokens are in your expression?" << endl;
  cin >> tokenAmount;
  
  for(i = 0; i < tokenAmount; i++)
    {
      cout << "Enter expression token by token (ex: '1' '+' '1')" << endl;
      cin >> getToken;
      s.push(getToken);
    }
  for(i = 0; i < tokenAmount; i++)
    {
      cout << s.pop() << " popped. ";
    }
  return 0;
}

