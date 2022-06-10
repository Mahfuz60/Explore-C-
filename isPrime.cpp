#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter your number(n):";
  cin >> n;
  int i;
  for (i = 2; i < n; i++)

  {
    if (n % i == 0)
    {
      cout << "Non-Prime";
      break;
    }
  }
  if (i == n)
  {
    cout << "Prime Number";
  }
  cout << endl;

  return 0;
}