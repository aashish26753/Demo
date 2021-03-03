#include<iostream>
using namespace std;
class A
{ int x,y;
 public:
 void get()
 { cout<<"Enter x and y: ";
  cin>>x>>y;
 }
};
int main()
{
  A a;
  a.get();
}
