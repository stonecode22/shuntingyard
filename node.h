#ifndef NODE_H
#define NODE_H

class Node
{
 public:
  Node();
  ~Node();
  char* getInput();
  void setInput();
  
 private:
  char *input;
  char *left;
  char *right;
};
