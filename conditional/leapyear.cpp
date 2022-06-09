#include<iostream>
using namespace std;
int main(){
  int year;
  cout<<"choose your favourite year:";
  cin>>year;
  if(year%400==0){
    cout<<"Leap Year"<<endl;
  }else if(year%100){
    cout<<"not Leap Year"<<endl;
  }else if(year%4==0){
    cout<<"leap Year"<<endl;
  }else{
    cout<<"not Leap year"<<endl;
  }



  return 0;
}
