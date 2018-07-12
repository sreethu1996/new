#include<iostream>

using namespace std;

template<class T>

class B
{

T first,second;

public:
	B(T a,T b)
	{
		first=a;
		second=b;
	}
	T Bigger();

};

template<class T>

T B<T>::Bigger(){

	return (first>second?first:second);
}

int main(){

  B <int> B(10,20);
  cout<<B.Bigger();
}