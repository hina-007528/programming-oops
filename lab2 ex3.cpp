#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int age;
    public:
    
    string getname(){
        return name;
    }
     int getAge(){
        return age;
    }
    void setname(string x){
        name=x;
    }
    void setAge(int y){
        age=y;
    }
};
int main(){
    Student student1;
    student1.setname("John");
    student1.setAge(15);
    cout<<"Name of Student1:"<<student1.getname()<<endl;
      cout<<"Age of Student1:"<<student1.getAge()<<endl;
}