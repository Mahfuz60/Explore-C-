#include <bits/stdc++.h>
using namespace std;
// calculate the array of buble shorting

int main()
{
  int n;
  cout << "enter the number(n):";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int counter = 1;
  while (n > counter)
  {
    for (int i = 0; i < n - counter; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
    }
    counter++;
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}