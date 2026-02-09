#include "SimpleStack.hpp"


using namespace std;

int
SimpleStack::pop()
{
  int value = front();
  pop_front();
  return value;  
}

int
SimpleStack::top() const
{
  return front();
}

void
SimpleStack::push(int newVal)
{
  push_front(newVal);
}

bool
SimpleStack::isEmpty() const
{
  return empty();
}
