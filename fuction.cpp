#include<iostream>
using namespace std;
class rectangle{
    public:
    float l,w,tot;
    rectangle(float a,float b){
        l=a;
        w=b;
    }
    float area(){
        tot=l*w;
        return tot;
    }
};
float calc_area(rectangle a){
    return a.area();
}
int main(){
    float area;
    rectangle a(15,5);
    area=calc_area(a);
    cout<<"the area of the reactangle is: "<< area <<endl;
    return 0;
}