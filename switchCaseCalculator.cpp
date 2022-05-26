#include <iostream>
using namespace std;

int main()
{
  float n1, n2;
  cout << "Enter your 2 number:";
  cin >> n1 >> n2;
  char op;
  cout << "enter your operator:";
  cin >> op;
  switch (op)
  {
  case '+':
    cout << n1 + n2 << endl;
    break;
  case '-':
    cout << n1 - n2 << endl;
    break;
  case '*':
    cout << n1 * n2 << endl;
    break;
  case '/':
    cout << n1 / n2 << endl;
    break;

  default:
    cout << "Another operator" << endl;
    break;
  }
  return 0;
}
