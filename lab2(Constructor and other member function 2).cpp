#include<iostream>
using namespace std;
class A{
    private:
    int length;
    int breadth;
    public:
    A()
    {
        cout<<"constructor called"<<endl;
    }
    ~A()
    {
        cout<<"destructor called"<<endl;
    }
};
int main(){
    A a;
}