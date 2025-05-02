#include <iostream>
using namespace std;
class Rectangle{
    private:
    int width,height;
    public:
    Rectangle(){
        width=10;
        height=5;
    }
    int area(){
        return width*height;
    }
};
int main(){
    Rectangle rect;
    int area=rect.area();
    cout<<"Area ="<<area<<endl;
}
