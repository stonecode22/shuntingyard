#ifndef SHUNT_H
#define SHUNT_H

#include<iostream>
using namespace std;

struct node
{
  char data;
  node* next;
};

class stack
{
 public:
  stack();
  ~stack();
  int push(int token);
  int pop();
  int display();
};

#endif
