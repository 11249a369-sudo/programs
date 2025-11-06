#include<iostream>
using namespace std;
int area(int a,int b){
    cout<<"two parameters are given so rectangle ";
    cout<<"area:"<<2*(a+b)<<endl;
    return 0;
}
/*int area(int a,int b,int c){
    cout<<"three parameters are given so triangle ";
    cout<<"area:"<<0.5*(b*h)<<endl;
}*/
int area(int a){
    cout<<"one parameters is given so square ";
    cout<<"area:"<<a*a<<endl;
    return 0;
}
int main(){
    area(5);
    area(10,5);
}