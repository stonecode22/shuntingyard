#include"shunt.h"

int main()
{
  stack stk;
  int number = 0;
  char command = 'y';
  cout << "So far, just a stack:\n";
  while(command != 'n')
    {
      cout << "Enter a number you wish to put into the stack: ";
      cin >> number;
      stk.push(number);
      cout << endl;
      stk.display();
      cout << "Wish to continue? (y/n)\n";
      cin >> command;
    }
}
