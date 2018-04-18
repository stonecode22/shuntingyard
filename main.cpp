#include"shunt.h"

int main()
{
  stack stk;
  int number = 0;
  char command;
  cout << "So far, just a stack:\n";
  do
    {
      cout << "Enter a number you wish to put into the stack: ";
      cin >> number;
      stk.push(number);
      cout << endl;
      cout << "Display:\n";
      stk.display();
      cout << "\nWish to continue? (y/n)\n";
      cin >> command;
    }while(command != 'n');
  cout << "Last display:\n";
  stk.display();
  return 0;
}
