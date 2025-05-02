#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
        cout<<"Default Constructor called.\nLength="<<length<<"\nBreadth="<<breadth<<endl;
    }
     Rectangle(int l,int b){
        length=l;
        breadth=b;
        cout<<"Overloaded Constructor called.\nLength="<<length<<"\nBreadth="<<breadth<<endl;
   
}
};
int main(){
    Rectangle r1;
   Rectangle r2(10,5);
}
