#include<iostream>
using namespace std;
class unaryop
{
    int x,y,z;
    public:
    unaryop()
    {
        x=0;y=0;z=0;
    }
    unaryop(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display()
    {
        cout<<"\n"<<x<<" "<<y<<" "<<z;
    }
    void operator-();

};
void unaryop::operator-()
{
    x=-x;
    y=-y;
    z=-z;
}
int main(){
    unaryop un(10,-20,70);
    cout<<"\n\n numbers are ::\n";
    un.display();
    -un;
    cout<<"\n numbers are after overloaded minus::";
    un.display();
    return 0;
}