#include <iostream>
using namespace std;
int main()
{

  int a, b, c;
  cin >> a >> b >> c;
  if (a > b)
  {
    if (a > c)
    {
      cout << "Maximum Number:a=" << a << endl;
    }
    else
    {
      cout << "Maximum Number:c=" << c << endl;
    }
  }
  else
  {
    if (b > c)
    {
      cout << "Maximum Number:b=" << b << endl;
    }
    else
    {
      cout << "Maximum Number:c=" << c << endl;
    }
  }
  return 0;
}