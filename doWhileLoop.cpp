#include <iostream>
using namespace std;

int main()
{
  int number;

  cin >> number;

  do
  {
    cout << "output:" << number << endl;
    cin >> number;
  } while (number > 0);

      return 0;
}