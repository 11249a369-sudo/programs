#include<iostream>
using namespace std;
class emp{
    public:
    char name[25],deg[15];
    float basic_pay,da,hra,tsal,tax,gross,a;
    void read(){
        cout<<"enter your name:";
        cin>>name;
        cout<<"enter your role:";
        cin>>deg;
    }
    void sal(float basic_pay){
        a=basic_pay;
        da=a*0.7;/// direct allowence
        hra=a*0.1;///housing rent allowence
        gross=a+da+hra;
        tax=gross*0.2;
        tsal=gross-tax;
    }
    void show(){
        cout<<"name:"<<name<<endl;
        cout<<"role:"<<deg<<endl;
        cout<<"basic_pay:"<<a<<endl;
        cout<<"direct allowence:"<<da<<endl;
        cout<<"housing allowence:"<<hra<<endl;
        cout<<"tax"<<tax<<endl;
        cout<<"total sal including all taxes"<<tsal<<endl;  
    }
};
int main(){
    float basic;
    emp e;
    e.read();
    cout<<"enter your basic pay:";
    cin>>basic;
    e.sal(basic);
    e.show();
}
