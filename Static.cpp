#include<iostream>
using namespace std;
class myclass
{
    public:
    static int staticcount;
    myclass()
    {
        staticcount++;
        cout<<"object is created "<<staticcount<<endl;
    }
    static void display()
    {
        cout<<"current static count is :"<<staticcount<<endl;

    }
};
int myclass :: staticcount=0;
int main(){
    myclass o;
    myclass o1;
    myclass o3;
    o.display();
    return 0;
}
