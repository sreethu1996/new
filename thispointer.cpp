/*dont remove invoke the commented tags its just for understanding*/
#include<iostream>
using namespace std;

class Base{
    int x=20;
	public : 
	Base(){}
	Base(int a):x{a} {}
    int Print(){

    	return this->x;
    }
  //  int Print(Base* const  this){ return this->x;} compiler returning
      void set(int a){ this->x = a;}
      /* compiler setting the value 
       void set(Base *const this , int a){ this->x =a ;}
*/
};

int main(){
   Base b ;
   cout<<"b = "<<b.Print()<<endl;//normal calling
   Base b1(10);
   cout<<"b1 = "<<b1.Print()<<endl;//normal calling

   //when compiler calls a function
    //cout<<"b = "<<Base::Print(&b1)<<endl;

   b1.set(30);cout<<"b1 = "<<b1.Print()<<endl;//normal calling
   // when compiler assign value to data member of class
   //Base::Print(&b1 ,30);
   
   return 0;

}