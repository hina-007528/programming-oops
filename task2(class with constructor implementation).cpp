#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    string department;
    string position;

public:

    Employee(string n, int i, string dep, string pos) {
        name = n;
        id = i;
        department = dep;
        position = pos;
    }

    Employee(string n, int i) {
        name = n;
        id = i;
        department = "";
        position = "";
    }

 
    Employee() {
        name = "";
        id = 0;
        department = "";
        position = "";
    }

 
    ~Employee() {
        cout << "Destructor executed..." << endl;
    }

 
    string getName() const { return name; }
    void setName(const string& n) { name = n; }

    
    int getId() const { return id; }
    void setId(int i) { id = i; }

    
    string getDepartment() const { return department; }
    void setDepartment(const string& dep) { department = dep; }

    string getPosition() const { return position; }
    void setPosition(const string& pos) { position = pos; }

   
    void setInfo(string n, int i, string dep, string pos) {
        name = n;
        id = i;
        department = dep;
        position = pos;
    }

   
    void getInfo() {
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Department: ";
        getline(cin, department);
        cout << "Enter Position: ";
        getline(cin, position);
    }

    
    void printInfo() const {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Department: " << department << endl;
        cout << "Position: " << position << endl;
    }

    void convert_caps() {
       
        for (int i = 0; i < name.length(); i++) {
            if (name[i] >= 'a' && name[i] <= 'z') {
                name[i] = name[i] - 'a' + 'A';
            }
        }

        
        for (int i = 0; i < department.length(); i++) {
            if (department[i] >= 'a' && department[i] <= 'z') {
                department[i] = department[i] - 'a' + 'A';
            }
        }

        for (int i = 0; i < position.length(); i++) {
            if (position[i] >= 'a' && position[i] <= 'z') {
                position[i] = position[i] - 'a' + 'A';
            }
        }
    }
};

int main() {
   
    

    Employee emp1("John Doe", 101, "HR", "Manager");
    emp1.printInfo();

    Employee emp2("Jane Smith", 102);
    emp2.printInfo();

    Employee emp3;
    emp3.getInfo();  
    emp3.printInfo();  
    
    emp3.convert_caps();
    cout << "\nAfter converting to uppercase:\n";
    emp3.printInfo();

    emp3.setInfo("Alice Brown", 103, "Engineering", "Developer");
    cout << "\nUpdated Employee Details:\n";
    emp3.printInfo();

    return 0;
}
