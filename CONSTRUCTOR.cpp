#include<iostream>
using namespace std;
class MyClass{
    public:
    int a,b;
    MyClass(){
        cout<<"consturector is created"<<endl;
        a=20;
        b=20;
        cout<<"sum of "<< a <<" + "<< b <<" is "<<a+b<<endl;

    }
    ~MyClass(){
        cout<<"destructor is done"<<endl;
    }
};
int main(){
    MyClass M;
    return 0;
}