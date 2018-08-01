/*constant and mutable */

#include<iostream>
using namespace std;
class Base {

mutable int x;
int y;

public:
Base(){}
Base(int a,int b):x{a},y{b}{}
int get() const{ x=20; return x;}
void set(int a){ x=a;}
};


int main(){
    Base b;
    b.set(10);
    cout<<b.get()<<endl;
	return 0;
}