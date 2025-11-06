#include<iostream>
#include<conio.h>
using namespace std;
class Car {
    public:
        char brand[20];
        char model[15];
        int year;
        void read() {
            cout << "Enter brand: ";
            cin >> brand;
            cout << "Enter model: ";
            cin >> model;
            cout << "Enter year: ";
            cin >> year;
        }
        void displayInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Year: " << year << endl;
        }
       
};
int main() {
    Car car;
    car.read();
    car.displayInfo();
    return 0;
    getch();
}