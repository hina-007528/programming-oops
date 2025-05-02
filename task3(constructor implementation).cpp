#include <iostream>
#include <string>
using namespace std;

class Bus {
private:
    string busNo;     
    string owner;        
    int capacity;      

public:
   
    Bus() {
        busNo = "";
        owner = "";
        capacity = 0;
        cout << "Default Constructor of Bus is executed..." << endl;
    }

    
    Bus(string bNo, string o) {
        busNo = bNo;
        owner = o;
        capacity = 0;
        cout << "Parameterized Constructor with Bus No and Owner executed..." << endl;
    }

    Bus(string bNo, string o, int cap) {
        busNo = bNo;
        owner = o;
        capacity = cap;
        cout << "Parameterized Constructor with Bus No, Owner, and Capacity executed..." << endl;
    }

 
    ~Bus() {
        cout << "Destructor is executed..." << endl;
    }

    
    string getBusNo() const { return busNo; }
    string getOwner() const { return owner; }
    int getCapacity() const { return capacity; }

    
    void setBusNo(const string& bNo) { busNo = bNo; }
    void setOwner(const string& o) { owner = o; }
    void setCapacity(int cap) { capacity = cap; }

  
    void setBus(string bNo, string o, int cap) {
        busNo = bNo;
        owner = o;
        capacity = cap;
    }

   
    void getBus() {
        cout << "Enter Bus License Number: ";
        cin >> busNo;
        cout << "Enter Owner Name: ";
        cin.ignore(); 
        getline(cin, owner);
        cout << "Enter Bus Capacity: ";
        cin >> capacity;
    }

   
    void putBus() const {
        cout << "Bus No: " << busNo << ", Owner: " << owner << ", Capacity: " << capacity << endl;
    }

    void bookBus() {
        capacity++;
        cout << "Seat booked successfully! New capacity: " << capacity << endl;
    }

    void cancelBooking() {
        if (capacity > 0) {
            capacity--;
            cout << "Seat canceled successfully! New capacity: " << capacity << endl;
        } else {
            cout << "No more bookings to cancel!" << endl;
        }
    }
};

int main() {
   
    Bus bus1("LHR 3216", "Bilal Travels", 20);
    Bus bus2("KHI 3317", "Hamza Travels", 22);
    Bus bus3("FSD 5467", "Hassan Travels", 18);

   
    cout << "\nBus Details:" << endl;
    bus1.putBus();
    bus2.putBus();
    bus3.putBus();

  
    cout << "\nBooking a seat on Bus 1..." << endl;
    bus1.bookBus();
    
  
    cout << "\nCanceling a seat on Bus 2..." << endl;
    bus2.cancelBooking();
    
    
    cout << "\nCanceling a seat on Bus 3..." << endl;
    bus3.cancelBooking();

   
    cout << "\nUpdated Bus Details after booking and cancellation:" << endl;
    bus1.putBus();
    bus2.putBus();
    bus3.putBus();

    return 0;
}
