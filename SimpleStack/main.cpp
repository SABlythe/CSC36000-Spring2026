#include <iostream>

#include "SimpleStack.hpp"

using namespace std;

int main(int argc, char *argv[])
{
  SimpleStack myStack;
  
  for (int i=1; i<argc; i++)
    {
      int ival = atoi(argv[i]);
      myStack.push(ival);
    }

  /* the following should not be possible. 
  myStack.push_back(666);
  */
  
  while(!myStack.isEmpty())
    {
      cout << myStack.pop() << endl;
    }

  return 0;
}
