#include<iostream>
using namespace std;
class book{
    public:
    char tittle[40],aname[25];
    int price;
    void read();
    void display();
};
    void book::read(){
        cout<<"enter book tittle: ";
        cin>>tittle;
        cout<<"enter author name: ";
        cin>>aname;
        cout<<"enter price: ";
        cin>>price;
    }
    void book::display(){
        cout<<"book tittle: "<<tittle<<endl;
        cout<<"book aurthor: "<<aname<<endl;
        cout<<"book price: "<<price<<endl;
    }
int main(){
    book b;
    b.read();
    b.display();
}