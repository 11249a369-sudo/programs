#include <iostream>

using namespace std;

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    friend void friendFunction(MyClass obj);
};

void friendFunction(MyClass obj) {
    cout << "Accessing privateData from friend function: " << obj.privateData << endl;
}

int main() {
    MyClass obj(123);
    friendFunction(obj);
    return 0;
}