#ifndef _SIMPLE_STACK_HPP_
#define _SIMPLE_STACK_HPP_

#include <list>

class SimpleStack:public std::list<int>
{
private:

public:

  int pop();
  int top();
  void push(int newVal);
};

#endif
