#include<iostream>
using namespace std;

int main(){
	 int a=10;
	 int &b =a;
	 int *p =&a;
     
      b=11;
      
	 cout<<"&a = "<<&a<<" \n b= "<<b<<endl;
	 cout<<"b = "<<&b<<endl;
	 cout<<"*p = "<<*p<<" \n p= "<<p<<endl;
	 cout<<"&p = "<<&p<<endl;


	return 0;
}