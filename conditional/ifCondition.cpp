#include <iostream>
using namespace std;
int main()
{
  int savings;
  cin >> savings;
  if (savings >= 6000)
  {
    if (savings > 12000)
    {
      cout << "India tour\n";
    }
    else
    {
      cout << "Bandarban Tour\n";
    }
  }
  else if (savings > 5000)
  {
    cout << "Sundarban Tour\n";
  }
  else
  {
    cout << "Hangout with friends\n";
  }
  return 0;
}