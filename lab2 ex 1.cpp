#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    public:
    void setname(string name){
        this->name=name;
    }
    string getname(){
        return name;
    }
};
int main(){
    Student student;
    student.setname("John Doe");
    cout<<"Name:"<<student.getname()<<endl;
}