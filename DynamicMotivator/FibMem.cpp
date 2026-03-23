#include <iostream>

using namespace std;

long long int *M; // array of memo-ized answers. 


long long int fibo(int n)
{
  if (M[n]==0) // uh, oh, need to calculate
    {
      if (n==0 || n==1) M[n] = 1;

      M[n] =  fibo(n-1) + fibo(n-2);
    }

  return M[n]; 
  
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

  M = new long long int [num+1];

  for (int index=0; index <=num; index++)
    M[index] = 0;
  
  cout << "Fibo(" << num << ") is "
       << fibo(num) << endl;
  
  
  return 0;
}
