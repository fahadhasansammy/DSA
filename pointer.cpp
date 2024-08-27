#include <iostream>
using namespace std;
int main()
{
 int x = 10;
 int *p = &x;
 int y = *p;
 cout<<x<<endl;
 cout<<&x<<endl;
 cout<<*p<<endl;
 cout<<y;
}

