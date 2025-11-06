#include<iostream>
using namespace std;
class student{
    public:
    char name[25],dept[5],reg[10];
    float total,avg,marks[5];
    void read(){
        cout<<"enter your name"<<endl;
        cin>>name;
        cout<<"enter your dept"<<endl;
        cin>>dept;
        cout<<"enter your register number"<<endl;
        cin>>reg;
        cout<<"enter marks";
        for(int i=1;i<=5;i++){
            cin>>marks[i];
            total+=marks[i];
        }
        avg=total/5;
    }
    void display(){
        cout<<"NAME:"<<name<<endl;
        cout<<"DEPARTMENT:"<<dept<<endl;
        cout<<"register_no.:"<<reg<<endl;
        for(int i=1;i<=5;i++){
            cout<<marks[i]<<endl;
        }
        cout<<"total:"<<total<<endl;
        cout<<"avg:"<<avg<<endl;
    }

};
int main(){
student s1;
s1.read();
s1.display();
cout<<"the resg no is:"<<s1.reg<<endl;
cout<<"program over";
return 0;
}
