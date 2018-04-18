#ifndef SHUNT_H
#define SHUNT_H

#include<iostream>
using namespace std;

struct node
{
  int data;
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
  int deleteAll();
 private:
  node* top;
  int deleteAll(node* &top);
  int push(node* &top, int token);
};

#endif
