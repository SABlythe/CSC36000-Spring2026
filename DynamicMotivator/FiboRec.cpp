#include <iostream>

using namespace std;

long int fibo(int n)
{
  if (n==0 || n==1) return 1;

  return fibo(n-1) + fibo(n-2);
}

int main(int argc, char *argv[])
{
  int num;
  if (argc>1)
    num = stoi(argv[1]);
  else
    {
      cout << "Enter n: ";
      cin >> num;
    }

  cout << "Fibo(" << num << ") is "
       << fibo(num) << endl;
  
  
  return 0;
}
