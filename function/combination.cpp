#include<iostream>
using namespace std;
//    nCr=n!/(n-r)!*r!


int fact(int n){
  int factorial=1;
  for(int i=2;i<=n;i++){

    factorial=factorial*i;
  }

  return factorial;


}

int main(){
  int n,r;
  cout<<"enter number (n & r):";
  cin>>n>>r;

  int result=fact(n)/(fact(n-r)*fact(r));
  cout<<result<<endl;

  return 0;
}