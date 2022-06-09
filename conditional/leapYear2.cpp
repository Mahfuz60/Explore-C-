#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"choose your year:";
  cin>>year;
  if(year%400==0||year%4==0 &&year%100!=0){
    cout<<"leap Year"<<endl;
  }else{
    cout<<"Not Leap Year"<<endl;
  }
  return 0;
} 