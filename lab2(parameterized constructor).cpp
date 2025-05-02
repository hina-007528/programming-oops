#include <iostream>
using namespace std;
class Student{
    private:
    int age,id;
    public:
    Student(int a,int b){
        age=a;
        id=b;
    }
    void showDetails(){
        cout<<"Age="<<age<<endl;
cout<<"Id="<<id<<endl;
    }
};
int main(){
    Student s1(18,1234);
   s1.showDetails();
}
