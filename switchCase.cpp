#include <iostream>
using namespace std;

int main()
{

  char button;
  cout << "enter your input:";
  cin >> button;

  /*if (button == 'a')
  {
    cout << "Hello Sir" << endl;
  }
  else if (button == 'b')
  {
    cout << "Aslamualaikum sir" << endl;
  }
  else if (button == 'c')
  {
    cout << "Good Morning sir" << endl;
  }
  else if (button == 'd')
  {
    cout << "Good afternoon sir" << endl;
  }
  else if (button == 'e')
  {
    cout << "Good Night Sir" << endl;
  }
  else
  {
    cout << "I am still Learing now!" << endl;
  }
  */

  switch (button)
  {
  case 'a':

    cout << "Hello sir";
    break;

  case 'b':

    cout << "Hello Mam";
    break;

  case 'c':

    cout << "Hello Friends";
    break;

  case 'd':

    cout << "Hi girls";
    break;

  case 'e':

    cout << "hi boys";
    break;

  default:

    cout << "Still try to good understading";
    break;
  }

  return 0;
}