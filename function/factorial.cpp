#include<iostream>
using namespace std;

//n! =n*(n-1)*(n-2)

int fact(int n){

  int factorial=1;
  for(int i=2;i<=n;i++){

    factorial=factorial*i;
  }
return factorial;

}

int main(){
  int n;
  cout<<"enter number:";
  cin>>n;

  int result=fact(n);
  cout<<result<<endl;

  return 0;
}