#ifndef _SIMPLE_STACK_HPP_
#define _SIMPLE_STACK_HPP_

#include <list>

class SimpleStack:private std::list<int>
{
private:

public:

  int pop();
  int top() const;
  void push(int newVal);
  bool isEmpty() const;
};

#endif
