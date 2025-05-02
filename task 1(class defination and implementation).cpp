#include <iostream>
#include <string>
using namespace std;


class Vehicle {
private:
    string company;
    string fuelType;
    int yearOfManufacture;
    string yearOfPurchase;
    string color;
    int engineCapacity;

public:
   
    Vehicle() {
        cout << "Default Constructor of Vehicle is called" << endl;
        company = "";
        fuelType = "";
        yearOfManufacture = 0;
        yearOfPurchase = "";
        color = "";
        engineCapacity = 0;
    }

    

    string getCompany() const { return company; }
    void setCompany(const string& comp) { company = comp; }

   
    string getFuelType() const { return fuelType; }
    void setFuelType(const string& fuel) { fuelType = fuel; }

  
    int getYearOfManufacture() const { return yearOfManufacture; }
    void setYearOfManufacture(int year) { yearOfManufacture = year; }

    
    string getYearOfPurchase() const { return yearOfPurchase; }
    void setYearOfPurchase(const string& year) { yearOfPurchase = year; }

   
    string getColor() const { return color; }
    void setColor(const string& col) { color = col; }


    int getEngineCapacity() const { return engineCapacity; }
    void setEngineCapacity(int capacity) { engineCapacity = capacity; }

   
    void displayDetails() const {
        cout << "Vehicle Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "Year of Manufacture: " << yearOfManufacture << endl;
        cout << "Year of Purchase: " << yearOfPurchase << endl;
        cout << "Color: " << color << endl;
        cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
    }

  
    void inputDetails() {
        cout << "Enter Company: ";
        cin >> company;
        cout << "Enter Fuel Type: ";
        cin >> fuelType;
        cout << "Enter Year of Manufacture: ";
        cin >> yearOfManufacture;
        cout << "Enter Year of Purchase: ";
        cin >> yearOfPurchase;
        cout << "Enter Color: ";
        cin >> color;
        cout << "Enter Engine Capacity (cc): ";
        cin >> engineCapacity;
    }

   
    void isOld() const {
        int currentYear = 2024;  
        int manufactureYear = yearOfManufacture;
        int purchaseYear = stoi(yearOfPurchase);  

        if (manufactureYear == purchaseYear) {
            cout << "Vehicle is purchased in the same year as it is manufactured." << endl;
        } else {
            cout << "Vehicle is " << (currentYear - manufactureYear) << " years old." << endl;
        }
    }

 
    ~Vehicle() {
        cout << "Destructor Called" << endl;
    }
};

int main() {
    Vehicle v; 

    
    v.inputDetails();
    v.displayDetails();
    v.isOld();

    return 0;
}
