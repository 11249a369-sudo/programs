#include <iostream>
using namespace std;
class TwoValues
{
int a,b;
public:
TwoValues(int i, int j)
{
a = i;
b = j;
}
friend class Min; 
};
class Min
{
public:
int minimal(TwoValues x);
};
int Min::minimal(TwoValues x)
{
return x.a < x.b ? x.a : x.b;
}
int main()
{
int x,y;
cout<<"enter a value";
cin>>x;
cout<<"enter a value";
cin>>y;
TwoValues ob(x,y);
Min m;
cout<< "the min value is "<<m.minimal(ob);
return 0;
}
