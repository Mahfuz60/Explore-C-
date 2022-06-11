#include <iostream>
using namespace std;

void fibo(int n)
{
  int fibo1 = 0;
  int fibo2 = 1;
  int fiboN;
  for (int i = 1; i <= n; i++)
  {
    cout << fibo1 << endl;
    fiboN = fibo1 + fibo2;
    fibo1 = fibo2;
    fibo2 = fiboN;
  }
  return;
}

int main()
{
  int n;
  cout<<"enter number(n):";
  cin >> n;
  fibo(n);

  return 0;
}