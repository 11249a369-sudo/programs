#include<iostream>
using namespace std;
class MyClass{
    public:
    int num1,num2,x,y;
    MyClass(){
        cout<<"consturector is created"<<endl;
        x=5;
        y=10;
        cout<<"sum of "<<  x <<" + "<< y <<" is "<<x+y<<endl;

    }
    MyClass(int a,int b){
        num1=a;
        num2=b;
        cout<<"addition of "<<num1<<" & "<<num2<<" is "<<num1+num2<<endl;
    }
};
int main(){
    MyClass M;
    MyClass N(15,20);
    return 0;
}