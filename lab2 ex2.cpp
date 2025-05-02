#include<iostream>
using namespace std;

class PublicClass{
    public:
    int publicVariable;
   void setPublicVariable(int variableValue){
    publicVariable=variableValue;
   }

    int getPublicVariable()
{
        return publicVariable;
    }
};
class PrivateClass{
    private:
    int privateVariable;
   void setPrivateVariable(int variableValue){
    privateVariable=variableValue;
   }

    int getPrivateVariable()
{
        return privateVariable;
    }
};
int main(){
    PublicClass publicClassObject;
    publicClassObject.setPublicVariable(5);
    cout<< publicClassObject.getPublicVariable();
    PrivateClass privateClassObject;
}