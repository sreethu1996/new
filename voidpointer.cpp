#include<iostream>
using namespace std;
void func(){}
int main(){
  int *a = new int(10); // connot convert const,volatile to void pointer ie. const int *a = new int(10); 
  void *b = a;
  void *c = static_cast <void*>(a);
  //not allowed void *c = static_cast <void*>(func);
  cout<<*(static_cast<int*>(c))<<endl;// cout << *c will not work since u need to type cast it to int 

  
}