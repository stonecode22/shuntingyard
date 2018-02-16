#ifndef STACK_H
#define STACK_H

class Stack
{
private:
  int top;
  char token[30];
public:
  Stack();
  bool push(char x);
  bool checkEmpty();
  char pop();
};

#endif
